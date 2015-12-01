#include "constants.h"

/**
 * Values of global variables. These are physical constants in external linkage
 * so that they only occupy memory once in a project.
 *
 * @author Stefan
 * @date Dec. 01, 2015
 * @version 0.01
 */

/**
 * Source: http://physics.nist.gov/cgi-bin/cuu/Value?bg
 */
const double GRAV_CONST = 6.67408e-20; //km**3 kg**-1 s**-2;

/**
 * Source: http://nssdc.gsfc.nasa.gov/planetary/factsheet/sunfact.html
 */
const double SOLAR_MASS = 1.988500e30; //kg

/**
 * Source: http://nssdc.gsfc.nasa.gov/planetary/factsheet/jupiterfact.html
 */
const double JUPITER_MASS = 1.8983e27; //kg

/**
 * Source: http://nssdc.gsfc.nasa.gov/planetary/factsheet/sunfact.html
 */
const double EARTH_MASS = 5.9726e24; //kg

/**
 * Source: http://www.nature.com/news/the-astronomical-unit-gets-fixed-1.11416
 */
const double AU = 1.49597870700e8; //km
