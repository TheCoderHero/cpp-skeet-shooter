#include "sacred.h"
#include "uiDraw.h"

/***************************************
* SACRED :: DRAW
* Draw the Sacred Bird to the screen.
***************************************/
void Sacred::draw() const
{
	drawSacredBird(location, 15.0F);
}

/***************************************
* SACRED :: HITS
* Virtual function that subtracts 1 hit
* point from the object, sets the power 
* up state to false, calls the kill function
* and returns -5 to the player.
***************************************/
int Sacred::hit()
{
	hPoints -= 1;
	setPowerUp(false);
	kill();
	return -10;
}
