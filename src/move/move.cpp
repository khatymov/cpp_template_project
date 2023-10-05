/*! \file move.cpp
 * \brief Move class implementation.
 */

#include <iostream>
#include <utility>

#include "move.h"

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

Move::Move(const Move& other) : _str_prt(other._str_prt), _str(other._str)
{
    cout << "Move::Move(const Move& other)" << endl;
}

Move& Move::operator=(const Move& other)
{
    cout << "Move& Move::operator=(const Move& other)" << endl;
    if (this != &other)
    {
        delete[] _str_prt;
        size_t len = strlen(other._str_prt) + 1;
        _str_prt = new char[len];
        _str_prt = other._str_prt;
        _str = other._str;
    }

    return *this;
}

Move::Move(Move&& other) noexcept : _str_prt(std::exchange(other._str_prt, nullptr)), _str(std::move(other._str))
{
    cout << "Move::Move(Move&& other)" << endl;
}

Move& Move::operator=(Move&& other)
{
    cout << "Move& Move::operator=(Move&& other)" << endl;
    std::swap(_str_prt, other._str_prt);
    _str = move(other._str);
    return *this;
}

void Move::print()
{
    cout << "str: " << _str << endl;
    cout << "str_prt: " << _str_prt << endl;
}

Move Move::operator+(const Move& other)
{
    cout << "Move &Move::operator+(const Move &other)" << endl;
    char* str_ptr = new char[strlen(this->_str_prt) + strlen(other._str_prt) + 1];
    strcpy(str_ptr, this->_str_prt);
    strcpy(str_ptr + strlen(this->_str_prt), other._str_prt);

    return Move(str_ptr, this->_str + other._str);
}

std::string Move::get_str()
{
    return this->_str;
}

const char* Move::get_str_prt()
{
    return this->_str_prt;
}
