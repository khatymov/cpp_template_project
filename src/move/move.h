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
    explicit Move(const char* str_prt = "", const std::string& str = std::string());

    //! \brief copy constructor.
    Move(const Move& other);

    //! \brief assigment operator.
    Move& operator=(const Move& other);

    //! \brief move constructor.
    Move(Move&& other);

    //! \brief move assigment operator.
    Move& operator=(Move&& other);

    //! \brief default destructor.
    ~Move() = default;

private:
    char* _str_prt;
    std::string _str;
};
