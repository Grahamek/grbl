/*
  geometry.h - a place for geometry helpers
  Part of Grbl

  Copyright (c) 2009 Simen Svale Skogsrud

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <math.h>

// Find the angle from the positive y axis to the given point with respect to origo.
double theta(double x, double y)
{
  double theta = atan(x/fabs(y));
  if (y>0) {
    return(theta);
  } else {
    if (theta>0) 
    {
      return(theta-M_PI);
    } else {
      return(-M_PI-theta);
    }
  }
}

