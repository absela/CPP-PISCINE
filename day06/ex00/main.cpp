#include "Convert.hpp"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "please enter valid input\n";
        return (0);
    }

    std::string str = std::string(argv[1]);
    Convert::convert(str);
    // convert.parsing(str);
    // convert.convert(str);
    return (0);
}

