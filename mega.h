/*************************************************************
* File: mega.h
* Author: John Tanner
*
* Description: Abstract bird class called Mega Bird.
*************************************************************/

#ifndef MEGA_H
#define MEGA_H

#include "bird.h"

class Mega : public Bird
{
private:
protected:
public:
	/*********************************************
	* Constructor
	* Initializes the Mega Bird settings
	*********************************************/
	Mega();

	/*********************************************
	* Function: DRAW
	* Description: Draws the mega bird object to the
	* screen.
	*********************************************/
	void draw() const;

	/*********************************************
	* Function: HIT
	* Description: Virtual function that subtracts
	* 1 hit point from the object, checks to see if
	* hit points are depleted, calls the kill function
	* and then returns 20 points to the user.
	*********************************************/
	int hit();
};


#endif MEGA_H