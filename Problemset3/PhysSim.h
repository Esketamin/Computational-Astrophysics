/*
 * PhysSim.h
 *
 *  Created on: Nov 27, 2015
 *      Author: Stefan
 */

#ifndef PHYSSIM_H_
#define PHYSSIM_H_

#pragma once
#include "CelBody.h"
#include "Star.h"

/**
 * Physical simulation class, that calculates the forces of all containing celestial objects and updating their
 * velocity and coordinate vectors.
 *
 * @author Stefan
 * @date Nov. 27, 2015
 * @version 0.1
 */
class PhysSim
{
public:
	PhysSim();
	virtual ~PhysSim();

	void addBody(CelBody* body);
	void update();

private:
	std::vector<CelBody*> _bodies;
};

#endif /* PHYSSIM_H_ */
