#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <vector>

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
return 0;
}

// template <class T>
// class test: public std::stack<T>
// {
//     public:
//         test(){}
//         typedef typename std::stack<T>::container_type::iterator iterator;
//         iterator begin(){return (this->c.begin());}
//         iterator end(){return (this->c.end());}
// };


//The test class is defined with a single template parameter T,
// which represents the type of the elements stored in the stack.
//The constructor of the test class is defined with an empty body, which means it does not perform any operations


// int main()
// {
//     test<int> t;
//     t.push(1);
//     test<int>::iterator it = t.begin();
//     std::cout << *it << std::endl;
// }