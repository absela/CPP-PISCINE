#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>

struct Data
{
    std::string s1;
    int number;
    std::string s2;
};

uintptr_t serialize(Data * data);
Data * deserialize(uintptr_t raw);

#endif