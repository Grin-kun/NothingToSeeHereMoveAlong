/*
Description: todo
Date: cba tbh
Version: 0.01
*/

typedef struct // Player
{
	int x, y, hp, atk, def;
	char playername [16];
} PLAYER;

//This function takes a player and prints their stats
void printstatus (PLAYER * theplayer);


