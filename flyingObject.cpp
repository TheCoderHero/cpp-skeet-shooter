#include "flyingObject.h"

/***************************************
* FLYINGOBJECT :: SET POINT
* Sets the objects location
***************************************/
void FlyingObject::setPoint(Point location)
{
	this->location = location;
}

/***************************************
* FLYINGOBJECT :: SET VELOCITY
* Sets the objects speed
***************************************/
void FlyingObject::setVelocity(Velocity speed)
{
	this->speed = speed;
}

/***************************************
* FLYINGOBJECT :: KILL
* Sets the objects hit points to 0
***************************************/
void FlyingObject::kill()
{
	hPoints = 0;
}

/***************************************
* FLYINGOBJECT :: ADVANCE
* Alters the objects location to move
* it across the screen.
***************************************/
void FlyingObject::advance()
{
	location.addY(speed.getDy());
	location.addX(speed.getDx());
}