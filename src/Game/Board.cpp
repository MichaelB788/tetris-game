#include "Board.hpp"
#include <array>

/*
 * A 10 x 20 matrix represents the board 
 *
 * The playable area is represented by # sign. Players are
 * free to roam this area
 *
 * Player object will be represented by their piece:
 * I, O, T, S, Z, J, L
 * 
 * */

std::array<std::array<char, 10>, 20> Board::arrayOfArrays = {{
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'} 
    }};

void Board::clearBoard()
{
    for (auto row : arrayOfArrays)
    {
        for (auto col : row)
        {
            col = '#';
        }
    }
}
