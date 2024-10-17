// SDL2 Library
#include <SDL2/SDL.h>

// SDL API
#include "API/SDLUtils.hpp"

// Game Objects
#include "Game/Piece.hpp"
#include "Game/Board.hpp"

// Custom Components
#include "Components/Graphics.hpp"
#include "Components/EventHandler.hpp"

int main (int argc, char **argv)
{
    SDLUtils::initEverything();

    bool gameIsRunning = true;
    SDL_Event event;

    const char piecetypes[7] = {'I','O','T','S','Z','L','J'};

    while (gameIsRunning)
    {
        // Handle the events
        EventHandler::process(event, gameIsRunning);

        // Clear the screen
        SDL_RenderClear(SDLUtils::renderer.pSDL_Renderer);

        // Update game

        // Draw our new frame
        Graphics::renderFrame(Board::arrayOfArrays, SDLUtils::renderer.pSDL_Renderer);

        // Show our new frame
        SDL_RenderPresent(SDLUtils::renderer.pSDL_Renderer); 
    }
    
    SDL_Quit();

    return 0;
}
