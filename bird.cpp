#include "bird.h"
#include "uiDraw.h"

/***************************************
* BIRD CONSTRUCTOR
***************************************/
Bird::Bird()
{
	int bottom = random(1, 4);
	int yAxis = random(-200, 200);
	location.setX(-200.0F);
	location.setY((float)yAxis);
	if(location.getY() < 0)
		speed.setDy((float)bottom);
	else
		speed.setDy((float)bottom * -1);
	speed.setDx(4.0);
	setPoint(location); 
	setVelocity(speed);
	hPoints = 1;
}

/***************************************
* BIRD CONSTRUCTOR
***************************************/
Bird::Bird(Point location)
{
	int bottom = random(1, 4);
	setPoint(location);
	if (location.getY() < 0)
		speed.setDy((float)bottom);
	else
		speed.setDy((float)bottom * -1);
	speed.setDx(4.0);
	setVelocity(speed);
	hPoints = 1;
}

/***************************************
* BIRD :: IS ALIVE
* check bird conditions and determine
* if bird is still alive.
***************************************/
bool Bird :: isAlive()
{
	if (location.getX() < 220.0F && hPoints > 0)
		return true;
	else
		return false;
}

/***************************************
* BIRD :: DRAW
* Draw the bird to the screen.
***************************************/
void Bird :: draw() const
{
	drawCircle(location, 15);
}