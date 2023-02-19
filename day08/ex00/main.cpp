#include "easyfind.hpp"
#include <vector>

int main()
{
    std::vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    try
    {
        std::cout << easyfind(vect, 3) << std::endl;
        std::cout << easyfind(vect, 6) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }
    return 0;
}