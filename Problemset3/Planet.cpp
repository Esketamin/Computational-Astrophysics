/*
 * Planet.cpp
 *
 *  Created on: Nov 27, 2015
 *      Author: Stefan
 */

#include "Planet.h"
#include "constants.h"
#include <iostream>

Planet::Planet() : CelBody(10,10,10,10,10)
{
	// TODO edit superconstructor call
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

