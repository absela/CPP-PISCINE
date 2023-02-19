#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <stdio.h>
#include <stdlib.h>
#include <cfloat>
#include <ctype.h>
#include <iostream>
#include <string>
#include <fstream>
#include <math.h>
#include <cmath>
#include <climits>
#include <iomanip>
#include <cerrno>
#include <sstream>

class Convert
{
    public:
        static std::string getstr();
        static void    convert(std::string str);

        static void   cast_integer(std::string &str);
        static void   cast_float(std::string &str);
        static void   cast_double(std::string &str);

        static void    parsing(std::string& str);

    private:
       static std::string str;

};
#endif