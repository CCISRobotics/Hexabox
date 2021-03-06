#include "Leg.h"
#ifndef LEGCONTROL_H
#define LEGCONTROL_H

class LegControl
{
/*
       Front                       Bot - Mid - Top - Body
LegOne      LegTwo
LegThree    LegFour
LegFive     LegSix
        Back

LegOne
Top pin 0
mid pin 1
bot pin 2

LegTwo
Top pin 3
Mid pin 4
Bot pin 5

LegThree
Top Pin 6
Mid Pin 7
Bot Pin 18

LegFour
Top Pin 19
Mid Pin 20
Bot Pin 21

LegFive
Top Pin 46
Mid Pin 47
Bot Pin 48

LegSix
Top Pin 49
Mid Pin 50
Bot Pin 51



*/
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

    void WalkForward()
    {
        LegOne.raise();
        LegTwo.raise();
        delay(1000);
        LegOne.forward();
        LegTwo.forward();
        delay(1000);
        LegOne.restleg();
        LegTwo.restleg();
        delay(1000);

        


        
        
        
        
    }


    leg LegOne = 0;
    leg LegTwo = 1;
    leg LegThree = 2;
    leg LegFour = 3;
    leg LegFive = 4;
    leg LegSix = 5;
};

#endif
