#include "combat.h"

typedef struct wilderness
{
  int * x;
  int * y;
  int sizeoflist;
} WILDERNESS;

void dowildbattle (PLAYER theplayer, WILDERNESS* thewild)
{
  // TODO
}

void addsquaretowild(WILDERNESS* wildtoaddto, int xtoadd, int ytoadd)
{
  wildtoaddto->*x
  wildtoaddto->x 
  wildtoaddto->x++ 

  while(wildtoaddto->*x != NULL)
  {
    wildtoaddto->x++;
  }

  wildtoaddto->*x = xtoadd; 
  wildtoaddto->x++;
}