/*! \file main.cpp
 * \brief Entry point.
 */

#include <iostream>

#include "move.h"
#include "my_class.h"

int main()
{
    MyClass my_class("Hello world!");
    std::cout << my_class.get() << std::endl;

    Move move;

    return 0;
}