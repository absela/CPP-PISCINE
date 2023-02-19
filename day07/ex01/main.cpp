#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    std::string array2[] = {"one", "two", "three", "four", "five"};
    iter(array, 5, print);
    iter(array2, 5, print);
    return 0;
}