/*
 * Planet.cpp
 *
 *  Created on: Nov 27, 2015
 *      Author: Stefan
 */

#include "Planet.h"

Planet::Planet(double mass, double x, double y, double velocityX,double velocityY)
: CelBody(mass, x, y, velocityX, velocityY)
{
	// TODO Auto-generated constructor stub

}

Planet::~Planet()
{
	// TODO Auto-generated destructor stub
}

/**
 * Check, if the object is movable.
 *
 * @author Stefan
 * @date Nov. 27, 2015
 * @version 0.1
 *
 * @return True if object can change coordinates, false if not.
 */
bool Planet::isMovable()
{
	return true;
}

