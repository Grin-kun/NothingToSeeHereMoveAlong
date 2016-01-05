/*
  TODO
*/

typedef struct // npc
{
        int x, y, hp, atk, def, npcid;
	char npcname [16];
} NPC;

//This function takes a player and prints their stats
//void printstatus (void * entity, short);
typedef struct // Player
{
  int x, y, hp, mana, atkpys, atkmage, defpys, defmage;
  char playername [16];
} PLAYER;
