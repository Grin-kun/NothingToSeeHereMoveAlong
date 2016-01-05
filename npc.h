/*
Description: todo
Date: cba tbh
Version: 0.01
*/

typedef struct // npc
{
	int x, y, hp, atk, def;
	char npcname [16];
} NPC;

//This function takes a player and prints their stats
void printstatus (void * entity, short);

float hit = 5.63634;
int ihit = (int) hit;
