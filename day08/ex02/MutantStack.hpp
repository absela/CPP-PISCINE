#ifndef MUTANATSTACK_HPP
# define MUTANATSTACK_HPP

# include <stack>

template <class T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack(){}
        MutantStack(MutantStack const &src){*this = src;}
        ~MutantStack(){}
        MutantStack &operator=(MutantStack const &rhs)
        {
            if (this != &rhs)
                this->c = rhs.c;
            return (*this);
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){return (this->c.begin());}
        iterator end(){return (this->c.end());}
};

#endif