#ifndef MAZE_HEADER
#define MAZE_HEADER

/*
 * Overview: Header file for an SDL-based Maze game that
 * includes rendering and event handling.
 */

/*
 * SDL Libraries: Includes SDL and SDL_thread headers
 * based on operating system
 */

#ifdef LINUX
#include <SDL2/SDL.h>
#include <SDL2/SDL_thread.h>
#elif defined(MAC)
#include <SDL2/SDL.h>
#include <SDL2/SDL_thread.h>
#else
#include <SDL.h>
#include <SDL_thread.h>
#endif

/*
 * Standard Libraries: Includes standard C libraries for I/O file
 * memory management, string manipulation and mathematics operations.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
 * Custom Headers: Includes header files that contains
 * structures, macros and prototpye for the Maze game components.
 */

#include "structures.h"
#include "sdl_macros.h"
#include "file_utilities.h"
#include "player.h"
#include "map_raycasting.h"
#include "rendering_threads.h"
#include "sdl_functions.h"

#endif