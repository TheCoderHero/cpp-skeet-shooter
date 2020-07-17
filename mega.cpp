#include "mega.h"

#include "uiDraw.h"

/***************************************
* MEGA CONSTRUCTOR
***************************************/
Mega::Mega()
{
	int bottom = random(1, 2);
	int yAxis = random(-200, 200);
	location.setX(-200.0F);
	location.setY((float)yAxis);
	if (location.getY() < 0)
		speed.setDy((float)bottom);
	else
		speed.setDy((float)bottom * -1);
	speed.setDx(0.5F);
	setPoint(location);
	setVelocity(speed);
	hPoints = 5;
}

/***************************************
* MEGA :: DRAW
* Draw the bird to the screen.
***************************************/
void Mega::draw() const
{
	drawMegaBirdA(location, 20);
	drawMegaBirdB(location, 10);
}

/***************************************
* MEGA :: HITS
* Virtual function that subtracts 1 hit 
* point from the object, checks to see if
* hit points are depleted, calls the kill 
* function and the sets the power up state
* to true. Then returns 20 points to the user.
***************************************/
int Mega::hit()
{
	hPoints -= 1;
	if (hPoints == 0)
	{
		kill();
		setPowerUp(true);
		return 50;
	}
	else
		return 0;
}
