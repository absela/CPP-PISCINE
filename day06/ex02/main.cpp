#include "base.hpp"

void identify(Base * p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
}

void identify( Base & p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        static_cast<void>(a);
        std::cout << "A\n";
    }
    catch(const std::exception& e){
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        static_cast<void>(b);
        std::cout << "B\n";
    }
    catch(const std::exception& e){
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        static_cast<void>(c);
        std::cout << "C\n";
    }
    catch(const std::exception& e){
    }
}

Base * generate(void)
{
    int i = rand() % 2;
    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C);
}

int main()
{
    Base *base = generate();
    identify(base);
    identify(*base);

    delete base;
    return (0);
}

// #include <iostream>

// class Base {
// public:
//     virtual ~Base() {}
// };

// class Derived : public Base {
// public:
//     void foo() { std::cout << "Derived::foo() called" << std::endl; }
// };

// int main() {
//     Base* base = new Base;
//     Derived* derived = dynamic_cast<Derived*>(base);
//     if (derived) {
//         derived->foo();
//     } else {
//         std::cout << "Dynamic cast failed" << std::endl;
//     }
//     delete base;
//     return 0;
// }


// #include <iostream>
// #include <exception>

// class Base {
// public:
//     virtual ~Base() {}
// };

// class Derived : public Base {
// public:
//     void foo() { std::cout << "Derived::foo() called" << std::endl; }
// };

// int main() {
//     Base* base = new Base;
//     try {
//         Derived& derived = dynamic_cast<Derived&>(*base);
//         derived.foo();
//     } catch (std::bad_cast& ex) {
//         std::cout << "Dynamic cast failed: " << ex.what() << std::endl;
//     }
//     delete base;
//     return 0;
// }
