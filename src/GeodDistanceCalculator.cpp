#include "GeodDistanceCalculator.h"

/*
 * Call the geod program to calculate the distance for the WGS84 ellipsoid.
 * This works only under Unix and requires to install the package proj-bin.
 */
double GeodDistanceCalculator::distance(Point& from, Point& to) const
{
#ifndef _WIN32
    static_cast<void>(to);
    static_cast<void>(from);
    return -1;
#else
    static_cast<void>(to);
    static_cast<void>(from);
    return -1;
#endif
}
