/*************************************************************
* File: tough.h
* Author: John Tanner
*
* Description: Abstract bird class called Tough Bird.
*************************************************************/

#ifndef TOUGH_H
#define TOUGH_H

#include "bird.h"

class Tough : public Bird
{
private:
protected:
public:
	/*********************************************
	* Constructor
	* Initializes the Tough Bird settings
	*********************************************/
	Tough();

	/*********************************************
	* Function: DRAW
	* Description: Draws the Tough Bird object to the
	* screen.
	*********************************************/
	void draw() const;

	/*********************************************
	* Function: HIT
	* Description: Virtual function that subtracts
	* 1 hit point from the object, checks to see if
	* hit points are depleted, calls the kill function
	* and then returns 10 points to the user.
	*********************************************/
	int hit();
};

#endif TOUGH_H