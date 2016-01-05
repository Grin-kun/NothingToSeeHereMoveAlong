/*
  TODO
*/

typedef struct // npc
{
  int hp, mana, atkpys, atkmage, defpys, defmage;
  char npcname [16];
} NPC;


typedef struct // Player
{
  int x, y, hp, mana, atkpys, atkmage, defpys, defmage;
  char playername [16];
} PLAYER;
