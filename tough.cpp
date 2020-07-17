#include "tough.h"
#include "uiDraw.h"

/***************************************
* TOUGH BIRD CONSTRUCTOR
***************************************/
Tough::Tough()
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
	hPoints = 3;
}

/***************************************
* TOUGH :: DRAW
* Draw the tough bird to the screen.
***************************************/
void Tough::draw() const
{
	drawToughBird(location, 15, hPoints);
}

/*********************************************
* TOUGH :: HIT
* Virtual function that subtracts 1 hit point 
* from the object, checks to see if hit points 
* are depleted, calls the kill function
* and then returns 10 points to the user.
*********************************************/
int Tough::hit()
{
	hPoints -= 1;
	if (hPoints == 0)
	{
		kill();
		return 30;
	}
	else
		return 0;
}
