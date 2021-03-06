#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>

#ifdef __APPLE__
  #include <OpenGL/gl.h>
  #include <OpenGL/glu.h>
#else
  #include <GL/gl.h>
  #include <GL/glu.h>
#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "draw.h"
#include "physics.h"

#include "objects/wall.h"
#include "objects/player.h"
#include "textures.h"
#include "level.h"



void launchGame();
void launchMenu();
