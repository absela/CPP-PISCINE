#include <iostream>
#include "Array.hpp"

int main()
{
    // Create an Array object with a size of 5
    Array<int> arr(5);
    // Populate the array with some values
    for (unsigned int i = 0; i < arr.getSize(); i++)
        arr[i] = i * 2;
    // Print the values using the operator[]
    for (unsigned int i = 0; i < arr.getSize(); i++)
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    std::cout << "-----------------" << std::endl;
    Array<std::string> array(6);
    array[0] = "Hello";
    array[1] = "World";
    array[2] = "!";
    array[3] = "I";
    array[4] = "am";
    array[5] = "anass";
    for (unsigned int i = 0; i < array.getSize(); i++)
        std::cout << "array[" << i << "] = " << array[i] << std::endl;

    return 0;
}
