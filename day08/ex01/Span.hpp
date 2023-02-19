#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
    private:
        unsigned int _n;
        std::vector<int> _v;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & src);
        ~Span();
        Span & operator=(Span const & rhs);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        class FullException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
        class NoSpanException : public std::exception {
            public:
                virtual const char* what() const throw();
        };
};

#endif