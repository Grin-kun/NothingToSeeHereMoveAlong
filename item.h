/*
Descrpiton: items
Date: cba
Version: 0.01
*/

#include <stdbool.h>

typedef struct // Item
{
  int amount, itemid; 
  char itemname [16];
  void * pitem;
}ITEM;

typedef struct // Weapon
{
  int pystr, mgstr, critch;
} WEAPON; 

typedef struct // Armour
{
  int pysdef, mgdef, hpboost; 
} ARMOUR;

typedef struct // Supplies
{
  int hprest, manarest;
  bool canrevive;
} SUPPLIES;

