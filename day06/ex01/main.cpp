#include "Data.hpp"

int main()
{
    Data *data = new Data;
    data->s1 = "Anass";
    data->number = 25;
    data->s2 = "Bsela";
    uintptr_t raw = serialize(data);
    Data *data2 = deserialize(raw);
    std::cout << data2->s1 << std::endl;
    std::cout << data2->number << std::endl;
    std::cout << data2->s2 << std::endl;
    delete data;
    return (0);
}