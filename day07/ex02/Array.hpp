#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int size;
    public:
        Array(void) : array(new T[0]), size(0) {}
        Array(unsigned int n) : array(new T[n]), size(n) {}
        Array(Array const &src) : array(new T[src.size]), size(src.size)
        {
            for (unsigned int i = 0; i < size; i++)
                array[i] = src.array[i];
        }
        ~Array(void) { delete [] array; }
        Array &operator=(Array const &rhs)
        {
            if (this != &rhs)
            {
                delete [] array;
                array = new T[rhs.size];
                size = rhs.size;
                for (unsigned int i = 0; i < size; i++)
                    array[i] = rhs.array[i];
            }
            return (*this);
        }
        T &operator[](unsigned int i)
        {
            if (i >= size)
                throw std::exception();
            return (array[i]);
        }
        unsigned int getSize(void) const { return (size); }
};

#endif