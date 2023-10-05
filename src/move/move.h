/*! \file move.h
 * \brief Move class interface.
 *
 * Class description.
 *
 */


#pragma once

#include <string>
#include <cstring>

/*! \class Move
 * \brief Some briefing
 */
class Move
{
public:

    //! \brief constructor.
    explicit Move(const char* str_prt = "Hi ptr", const std::string& str = std::string("Hi mark"));

    //! \brief copy constructor.
    Move(const Move& other);

    //! \brief assigment operator.
    Move& operator=(const Move& other);

    //! \brief plus operator.
    Move operator+(const Move& other);

    //! \brief move constructor.
    Move(Move&& other) noexcept;

    //! \brief move assigment operator.
    Move& operator=(Move&& other);

    //! \brief default destructor.
    ~Move() = default;

    void print();

    std::string get_str();

    const char*  get_str_prt();

private:
    char* _str_prt;
    std::string _str;
};
