#include "bullet.h"
#include "uiDraw.h"
#include <cmath>

#define BULLET_SPEED 10.0
#define M_PI 3.14

/***************************************
* BULLET :: IS ALIVE
* Check bullet conditions and determine
* if bullet is still alive.
***************************************/
bool Bullet::isAlive()
{
	if (location.getX() > -200.0F && hPoints > 0)
		return true;
	else
		return false;
}

/***************************************
* BULLET :: ADVANCE
* Alter bullet object position to move
* bullet across the screen.
***************************************/
void Bullet::advance()
{
	location.addX(speed.getDx());
	location.addY(speed.getDy());
}

/***************************************
* BULLET :: DRAW
* Draw bullet object to the screen.
***************************************/
void Bullet::draw() const
{
	drawDot(location);
}

/***************************************
* BULLET :: DRAW LARGE
* Draw large bullet object to the screen.
***************************************/
void Bullet::drawLarge() const
{
	drawLargeDot(location);
}

/***************************************
* BULLET :: FIRE
* Sets bullet's Point, and uses the
* passed angle to set the Velocity.
***************************************/
void Bullet::fire(Point point, float angle)
{
	setPoint(point);
	float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
	float dy = BULLET_SPEED * (sin (M_PI / 180.0 * angle));
	speed.setDx(dx);
	speed.setDy(dy);
}