#ifndef MECHANICS_H
#define MECHANICS_H

#include <array>
#include "Coordinate.hpp"
#include "Piece.hpp"

namespace Mechanics 
{
    std::array<Point, 4> giveNewPiece(char type);

    namespace Collision
    {
        bool wallOrPiece(Piece& target);
    };
}

#endif
