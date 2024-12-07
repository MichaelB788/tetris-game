#include <SDL2/SDL.h>
#include <cstdio>
#include <cstdlib>

#include "Tetris.hpp"

#include "../Components/Graphics.hpp"
#include "../Components/EventHandler.hpp"
#include "../API/GameCore.hpp"

#include "Objects/Grid.hpp"
#include "Objects/Piece.hpp"

Tetris::Tetris()
{
    /* GameCore initializes SDL subsystems such as SDL_Render
     * and SDL_window.
     *
     * GraphicsModule will use the renderer to draw on the screen.
     *
     * Eventhandler will handle SDL events and Player movement.
     * */
    GameCore core;
    GraphicsModule graphics = GraphicsModule(core.m_Renderer);
    EventHandler handler = EventHandler(&m_player, m_running);

    // Game loop
    while (m_running)
    {
        handler.processInput();
        updateGame();
        graphics.clearAndPresentFrame();
        SDL_Delay(5);
    }

    m_player.points();

    // Testing
    Grid::printGrid();
}

void Tetris::updateGame()
{
    Piece target = m_player.getPiece();

    unsigned int row = 0;
    while (row < 20)
    {
        if (Grid::hasFullRow(row)) { 
            Grid::clear(row);
            m_player.incrementPoint();
        }
        row++;
    }

    target.modifyGrid();
}
