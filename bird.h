/*************************************************************
* File: bird.h
* Author: John Tanner
*
* Description: Bird class derived from a public Flying Object.
*************************************************************/

#ifndef BIRD_H
#define BIRD_H

#include "flyingObject.h"

class Bird : public FlyingObject
{
protected:
	//bool holding the power up status
	bool powerUp;
private:
public:
	/*********************************************
	* Constructor
	* Initializes the bird settings
	*********************************************/
	Bird();

	/*********************************************
	* Default Constructor
	* Initializes the bird settings with a pre-
	* determined location on the screen.
	*********************************************/
	Bird(Point location);

	/*********************************************
	* Function: IS ALIVE
	* Description: Checks to see if the object is
	* still alive on the screen.
	*********************************************/
	bool isAlive();

	/*********************************************
	* Function: DRAW
	* Description: Draws the bird object to the
	* screen.
	*********************************************/
	void draw() const;

	/*********************************************
	* Function: GET POWER UP
	* Description: Getter function that returns
	* the current power up state.
	*********************************************/
	bool getPowerUp() const { return powerUp; }

	/*********************************************
	* Function: SET POWER UP
	* Description: Setter function that sets the
	* power up state.
	*********************************************/
	void setPowerUp(bool powerUp) { this->powerUp = powerUp; }

	/*********************************************
	* Function: HIT
	* Description: Virtual function that subtracts
	* 1 hit point from the object, checks to see if
	* hit points are depleted, calls the kill function
	* and then returns 10 points to the user.
	*********************************************/
	virtual int hit() 
	{
		hPoints -= 1;
		if (hPoints == 0)
			kill();
		return 10;
	}
};

#endif BIRD_H