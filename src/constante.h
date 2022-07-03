#ifndef __CONSTANTE__H__
#define __CONSTANTE__H__

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#include <stdlib.h>
#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include <time.h>

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#define LARGEUR_WINDOW 1920
#define HAUTEUR_WINDOW 1080
#define MUR_LARGEUR 135
#define MUR_HAUTEUR 15
#define LARGEUR 11
#define HAUTEUR 7
#define FPS 16

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

enum
{
    HAUT,//0
    BAS,//1
    GAUCHE,//2
    DROITE//3
};

enum
{
    VIDE,//0
    MUR_INDESTRUCTIBLE,//1
    LINK,//2
    MUR_DESTRUCTIBLE//3
};

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

typedef struct Input
{
    SDL_bool key[SDL_NUM_SCANCODES];
    SDL_bool quit;
    int x, y, xrel, yrel;
    int xwheel, ywheel;
    SDL_bool mouse[6];
}Input;

typedef struct Link
{
    SDL_Texture *direction[4], *direction_actuel;
    SDL_Rect forme, hitbox;
}Link;

typedef struct Map
{
    SDL_Rect coord_case;
    int type;
}Map;

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

#endif