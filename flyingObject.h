/*************************************************************
* File: flyingObject.h
* Author: John Tanner
*
* Description: Defines a Base class for flying objects.
*************************************************************/


#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "velocity.h"

class FlyingObject
{
private:
protected:
	//Location of the object
	Point location;
	//Speed the object travels
	Velocity speed;
	//Hit Points of the object
	int hPoints;
public:
	/*********************************************
	* Function: GET POINT
	* Description: Getter function that returns
	* the objects Point location.
	*********************************************/
	Point getPoint() const { return location; }

	/*********************************************
	* Function: GET VELOCITY
	* Description: Getter function that returns
	* the objects Velocity speed.
	*********************************************/
	Velocity getVelocity() const { return speed; }

	/*********************************************
	* Function: SET POINT
	* Description: Setter function that sets the
	* objects Point location.
	*********************************************/
	void setPoint(Point location);

	/*********************************************
	* Function: SET VELOCITY
	* Description: Setter function that sets the
	* objects Velocity speed.
	*********************************************/
	void setVelocity(Velocity speed);

	/*********************************************
	* Function: ADVANCE
	* Description: Alters the objects location to
	* move it across the screen.
	*********************************************/
	void advance();

	/*********************************************
	* Function: KILL
	* Description: Setter function that sets the
	* objects hit points to 0.
	*********************************************/
	void kill();

	/*********************************************
	* Function: DRAW
	* Description: Pure virtual draw function.
	*********************************************/
	virtual void draw() const = 0;
};

#endif FLYINGOBJECT_H