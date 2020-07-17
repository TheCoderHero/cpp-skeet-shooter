/*************************************************************
* File: sacred.h
* Author: John Tanner
*
* Description: Abstract bird class called Sacred Bird.
*************************************************************/

#ifndef SACRED_H
#define SACRED_H

#include "bird.h"

class Sacred : public Bird
{
private:
protected:
public:
	/*********************************************
	* Constructor
	* Initializes the Sacred bird settings with 
	* the bird objects Constructor.
	*********************************************/
	Sacred() : Bird() {}

	/*********************************************
	* Function: DRAW
	* Description: Draws the sacred bird object to the
	* screen.
	*********************************************/
	void draw() const;

	/*********************************************
	* Function: HIT
	* Description: Virtual function that subtracts
	* 1 hit point from the object, checks to see if
	* hit points are depleted, calls the kill function
	* and then returns -5 points to the user.
	*********************************************/
	int hit();
};

#endif SACRED_H