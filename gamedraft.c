#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "quest.h"
#include "entity.h"
#include <time.h>


void printcurrentquest (void * quest, short questid)
{
switch (questid)
{
case 1:
    printf ("%s\n", ((QUEST*)quest)->questname);
break;

case 2:
    // nothing here yet!
break;
}
}
void printstatus (void * entity, short eid) // Entity status
{

switch (eid)
{
case 1:
  printf("%s:\n", ((PLAYER *)entity)->playername);
  printf("HP:%d, Mana:%d\n", ((PLAYER*)entity)->hp, ((PLAYER*)entity)->mana);
  printf("Physical defence:%d, Magical defence:%d\n", ((PLAYER*)entity)->defpys, ((PLAYER*)entity)->defmage); 
  printf("Physical attack:%d, Magical attack:%d\n", ((PLAYER*)entity)->atkpys, ((PLAYER*)entity)->atkmage);
  
break;

case 2:
  printf("%s:\n", ((PLAYER *)entity)->npcname);

break;

case 3:

break;
}
}

int main ()
{

  srand (time (NULL) );
  int randomnumber = rand() % 40;


// PLAYER AND INSTRUCTIONS //

printf("Welcome to TextRPG\n\nPlease enter your name: ");

PLAYER theplayer;

gets (theplayer.playername);

printf("\n");

printf("Welcome, %s\n", theplayer.playername);
printf("\nControls: u = Move up, d = Move down, l = Move left, r = Move right, s = Party Stats, q = Quit, w = Location, i = Active Quests");
theplayer.x = 10;
theplayer.y = 10;
theplayer.hp = 100;
theplayer.mana = 100;
theplayer.atkpys = 1;
theplayer.atkmage = 1;
theplayer.defpys = 1;
theplayer.defmage = 1;

// NPCs //

NPC aria;
strcpy(aria.npcname, "Aria");
aria.hp = 100;
aria.mana = 100;
aria.atkpys = 1;
aria.atkmage = 1;
aria.defpys = 1;
aria.defmage = 1;







char inscode;

// QUESTS //

QUEST noquest; //NO ACTIVE QUEST
noquest.status = 0;
noquest.questid = 1;
strcpy(noquest.questname, "\nNo quests are currently active");

QUEST helpingaria;

int frankdialouge1, ariadialouge1;
helpingaria.status = 0;
helpingaria.questid = 2;
strcpy(helpingaria.questname, "Helping Aria");

while (1) //Game loop
{
printf("\nWhat do you do?: ");

inscode = getchar();

if (inscode == 'q')
{
	printf("\nGoodbye \n\n");

	return 0;
} // end  quit

if (inscode == 'u')
{
	theplayer.y++;

} // end up

if (inscode == 'd')
{

	theplayer.y--;

} // end down

if (inscode == 'l')
{

	theplayer.x--;
} // end left

if (inscode == 'r')
{
	theplayer.x++;
} // end right

if (inscode == 's')
{
        printstatus(& theplayer, 1);
} // end stats

if (inscode == 'i')
{
    printcurrentquest(& noquest, 1);
} // currentquest

if (inscode == 'w')
{
	printf("\nYou are at %d,%d\n", theplayer.x, theplayer.y);
} // location


if (theplayer.x == 15 && theplayer.y == 15 && helpingaria.status == 0) // Helping Aria start 1
{
  	  if (frankdialouge1 == 0)
	  {
	  printf("\nOld Frank:\n\"Ah, %s, I was looking for you...\"\n\"My daughter, Aria, needs help moving some boxes into our new house\"\n"
	       "\n\"Will you help an old man out?\"\n "
	       "\nEnter Y to accept, or N to decline\n", theplayer.playername);
	  frankdialouge1++;
	  }
	  if (inscode == 'y')
	  {
	  printf("\n\"I can always count on you! You can find her at our new house, let me mark that on your map!\"\n"
	  "\nThe old man marks out the house at 18,19\n");
	  helpingaria.status++;
          //currentquest->helpingaria;
	  }
	  if (inscode == 'n')
	  {  
	  printf("\"Ah, I didn't think you'd be busy! Well, come back to me when you've got the time\"\n");
	  frankdialouge1--;
	  }	  
}

if (theplayer.x == 18 && theplayer.y == 19 && helpingaria.status == 1) // Helping Aria Old Frank's House 2
{
  // if (ariadialouge1 == 0)
  // {
	  printf("\nAs you approach Old Frank's house, you hear a high pitched scream followed by a loud crashing sound\n"
		 "\nYou Rush to the front door....\n"
		 "\n1. Call out for Aria"
		 "\n2. Kick the door in"
		 "\n3. Check the window\n");
	  ariadialouge1++;
	  // }
	  if (inscode == '1')
	  {
	  printf("\n\"%s: Aria! Are you okay?\"",theplayer.playername);
	  printf("\n\"Aria: Owch owch owch...Huh? Who's asking?\"");
	  printf("\n\"%s: I'm %s, I work with your father on the farm\"",theplayer.playername, theplayer.playername);
	  printf("\nYou hear the sound of a bolt being shifted, followed by the heavy door being slowly dragged open"
	         "\nBehind it stands a young looking girl with long, disheveled, crimson red hair.");
	  printf("\n\"Aria: What do you want?\"");
	  printf("\n\"%s: Your father asked me to come help you move in\"",theplayer.playername);
	  printf("\nThe young girl's face contorts angrily"
		     "\n\"Aria: W..Well, I don't need any help! So you can leave, okay?\"");
	  printf("\n\"%s: Let me do something, or Old Frank will be upset with me\"",theplayer.playername);

	    
	  }
	  
		
	    
}  
while (getchar() != '\n')
	{
	}

} // end while

return 0;

}// end main
