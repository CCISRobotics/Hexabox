#include "Leg.h"
#ifndef LEGCONTROL_H
#define LEGCONTROL_H

class LegControl
{

    public:
    
    // Sets all servos to 90 degrees
    void FullReset()
    {
    LegOne.CenterLeg();
    LegTwo.CenterLeg();
    LegThree.CenterLeg();
    LegFour.CenterLeg();
    LegFive.CenterLeg();
    LegSix.CenterLeg();
    }


    leg LegOne = 0;
    leg LegTwo = 1;
    leg LegThree = 2;
    leg LegFour = 3;
    leg LegFive = 4;
    leg LegSix = 5;
};

#endif
