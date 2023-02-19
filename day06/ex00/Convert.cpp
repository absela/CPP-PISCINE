#include "Convert.hpp"

std::string Convert::str = "salam";

std::string Convert::getstr(){ return(str);}

void    Convert::cast_integer(std::string &str)
{
    double value;
    if(str.length() != 1 || (str.length() == 1 && isdigit(str[0])))
        value = std::stod(str);
    else
        value = str[0];
    std::cout << "char   : ";
    if (std::isprint(static_cast<int>(value))) {
        std::cout << "'" << static_cast<char>(value) << "'\n";
    } else {
        std::cout << "Not displayed\n";
    }
    std::cout << "int    : ";
    if (value > INT_MAX || value < INT_MIN)
        std::cout << "impossible" << "\n";
    else
        std::cout << static_cast<int>(value) << "\n";
    std::cout << "float  : ";
    if (value > FLT_MAX || value < -FLT_MAX)
        std::cout << "impossible" << "\n";
    else
        std::cout << std::fixed << static_cast<float>(value) << "f\n";
    std::cout << "double : ";
    if(value > DBL_MAX || value < -DBL_MAX)
        std::cout << "impossible" << "\n";
    else
        std::cout << std::fixed << static_cast<double>(value) << "\n";
}

void    Convert::cast_float(std::string &str)
{
    float value;
    if(str.length() != 1 || (str.length() == 1 && isdigit(str[0])))
        value = std::stod(str);
    else
        value = str[0];
    std::cout << "char   : ";
    if (std::isprint(static_cast<int>(value))) {
        std::cout << "'" << static_cast<char>(value) << "'\n";
    } else {
        std::cout << "Not displayed\n";
    }
    std::cout << "int    : ";
    if (value > INT_MAX || value < INT_MIN)
        std::cout << "impossible" << "\n";
    else
        std::cout << static_cast<int>(value) << "\n";
    std::cout << "float  : ";
    if (value > FLT_MAX || value < -FLT_MAX)
        std::cout << "impossible" << "\n";
    else
        std::cout << std::fixed << value << "f\n";
    std::cout << "double : ";
    if(value > DBL_MAX || value < -DBL_MAX)
        std::cout << "impossible" << "\n";
    else
        std::cout << std::fixed << static_cast<double>(value) << "\n";
}

void Convert::cast_double(std::string &str)
{
    double value;
    if(str.length() != 1 || (str.length() == 1 && isdigit(str[0])))
        value = std::strtod(str.c_str(),NULL);
    else
        value = str[0];
    std::cout << "char   : ";
    if (std::isprint(static_cast<int>(value))) {
        std::cout << "'" << static_cast<char>(value) << "'\n";
    } else {
        std::cout << "Not displayed\n";
    }
    std::cout << "int    : ";
    if (value > INT_MAX || value < INT_MIN)
        std::cout << "impossible" << "\n";
    else
        std::cout << static_cast<int>(value) << "\n";
    std::cout << "float  : ";
    if (value > FLT_MAX || value < -FLT_MAX)
        std::cout << "impossible" << "\n";
    else
        std::cout << std::fixed << static_cast<float>(value) << "f\n";
    std::cout << "double : ";
    if(value > DBL_MAX || value < -DBL_MAX)
        std::cout << "impossible" << "\n";
    else
        std::cout << std::fixed << value << "\n";
}

bool is_float(const std::string &str) {
    return (str.find('.') != std::string::npos && str.find('f') != std::string::npos);
}

bool is_double(const std::string &str) {
    return (str.find('.') != std::string::npos && str.find('f') == std::string::npos);
}

void    Convert::parsing(std::string& str)
{
    if (str.length() == 1)
        return ;
    else
    {
        size_t signe = 0;
        int point = 0;
        if (str[0] == '+' || str[0] == '-')
            signe++;
        for (size_t i = signe; i < str.length() - 1; i++)
        {
            if (str[i] == '.' || std::isdigit(str[i]))
            {
                if (str[i] == '.')
                    point++;
                if (point > 1)
                {
                    std::cout << "the argument is invalide" << std::endl;
                    exit(1);
                }
                continue ;
            }
            else
            {
                std::cout << "the argument is invalide" << std::endl;
                exit(1);
            }
        }
        if ((std::isdigit(str[str.length() - 2]) && str[str.length() - 1] == 'f' && str.find('.') != std::string::npos ) || std::isdigit(str[str.length() - 1]))
        {
            // std::cout << str[str.length() - 1] << str.find('.') << std::endl;
            return ;
        }
        else
        {
            std::cout << "the argument is invalide"  << std::endl;
            exit(1);
        }
    }
}

void    Convert::convert(std::string str)
{
    if(str == "nan" || str == "inf" || str == "+inf" || str == "-inf")
    {
        std::cout << "char : impossible\n";
        std::cout << "int : impossible\n";
        std::cout << "float :"  << str << "f\n";
        std::cout << "double :" << str << "\n";
        return ;
    }
    try{
        if(!is_float(str) && !is_double(str))
            cast_integer(str);
        else if(is_float(str))
            cast_float(str);
        else if(is_double(str))
            cast_double(str);
        else
            std::cout << "please enter valid input\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}