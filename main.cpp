/*! \file main.cpp
 * \brief Entry point.
 */

#include <iostream>

#include "my_class.h"
#include "move.h"

int main()
{
    MyClass my_class("Hello world!");
    std::cout << my_class.get() << std::endl;

    Move move;

    return 0;
}