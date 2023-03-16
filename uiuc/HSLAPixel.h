/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {

  /*
    The HSL color space represents colors by human perceptions of color

    HSL stands for hue, saturation, and luminance, and the values on the hue axis run from 0-360.
    Saturation indicates the degree to which the hue differs from a neutral gray, and the values run
    from 0%, which is no color saturation to 100% which is the fulelst saturation. 
    Luminance indicates the level of illumination. 0% appears black (no light), while 100% is full
    illumination, which appears white.
  */

 class HSLAPixel {
  public:
    double h; // hue
    double s; // saturation
    double l; // luminance
    double a; // alpha channel (blending opacity)
 };

}
