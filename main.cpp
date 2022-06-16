/*! \file main.cpp
 * \brief Entry point.
 */

#include "my_class.h"

int main(int argc, char** argv)
{
    char* str = "Hello world!";
    MyClass my_class(str);

    my_class.print();

    return 0;
}