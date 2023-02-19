#include "Span.hpp"

Span::Span()
{
    this->_n = 10;
}

Span::Span(unsigned int n)
{
    this->_n = n;
}

Span::Span(Span const & rhs)
{
    *this = rhs;
}

Span::~Span()
{
}

Span & Span::operator=(Span const & rhs)
{
    this->_n = rhs._n;
    this->_v = rhs._v;
    return *this;
}

void Span::addNumber(int n)
{
    if (this->_v.size() == this->_n)
        throw Span::FullException();
    this->_v.push_back(n);
}

int Span::shortestSpan()
{
    if (this->_v.size() < 2)
        throw Span::NoSpanException();
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());
    int min = v[1] - v[0];
    for (unsigned int i = 2; i < v.size(); i++)
    {
        if (v[i] - v[i - 1] < min)
            min = v[i] - v[i - 1];
    }
    return min;
}

int Span::longestSpan()
{
    if (this->_v.size() < 2)
        throw Span::NoSpanException();
    std::vector<int> v = this->_v;
    std::sort(v.begin(), v.end());
    return v[v.size() - 1] - v[0];
}

const char* Span::FullException::what() const throw()
{
    return "Span is full";
}

const char* Span::NoSpanException::what() const throw()
{
    return "Span has no span";
}
