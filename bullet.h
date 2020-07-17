/*************************************************************
* File: bullet.h
* Author: John Tanner
*
* Description: The bullet class derived from a publiv Flying Object.
*************************************************************/

#ifndef BULLET_H
#define BULLET_H

#include "flyingObject.h"
#include "point.h"
#include "velocity.h"

class Bullet : public FlyingObject
{
private:
public:
	/*********************************************
	* Constructor
	* Initializes the bullet settings
	*********************************************/
	Bullet() { hPoints = 1; }

	/*********************************************
	* Function: IS ALIVE
	* Description: Checks to see if the object is
	* still alive on the screen.
	*********************************************/
	bool isAlive();

	/*********************************************
	* Function: ADVANCE
	* Description: Sets the bullets points so it
	* can move across the screen.
	*********************************************/
	void advance();

	/*********************************************
	* Function: DRAW
	* Description: Draws the bullet object to the
	* screen.
	*********************************************/
	void draw() const;

	/*********************************************
	* Function: DRAW
	* Description: Draws a large buller object to the
	* screen.
	*********************************************/
	void drawLarge() const;

	/*********************************************
	* Function: FIRE
	* Description: Sets initial position and angle
	* for bullet trajectory.
	*********************************************/
	void fire(Point point, float angle);
};

#endif BULLET_H