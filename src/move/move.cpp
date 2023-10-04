/*! \file move.cpp
 * \brief Move class implementation.
 */

#include "move.h"
#include "iostream"

using namespace std;

Move::Move(const char* str_prt, const std::string& str) : _str_prt(nullptr), _str(str)
{
    cout << "Move::Move(const char* str_prt, const std::string& str)" << endl;
    if (str_prt)
    {
        auto len = std::strlen(str_prt) + 1;
        _str_prt = new char[len];
        std::memcpy(_str_prt, str_prt, len);
    }
}

Move::Move(Move&& other)
{
    if (this != &other)
    {
    }
}