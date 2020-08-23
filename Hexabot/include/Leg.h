#include <Servo.h>
#ifndef LEG_H
#define LEG_H

class leg
{
    public:
    //Takes in an int - This number serves as the leg number
    // Leg number is important to refer to which pin the legs are connected to on the servo. 
    //leg number = x,  (x * 3) + 1 = pin top,  (x * 3) + 2 = pin mid, (x * 3) + 3 = pin bot... This could have been hard coded but why be simple? 
    leg(int x)
    {
        PinTop = (x * 3) + 1;
        top.attach(PinTop);
        PosTop = top.read();

        PinMid = (x * 3) + 2;
        mid.attach(PinMid);
        PosMid = mid.read();

        PinBot = (x * 3) + 3;
        bot.attach(PinBot);
        PosBot = bot.read();
        
    }

    // Sets writes to each servo to set their positions to 90
   void CenterLeg()
    {
        bot.write(90);
        mid.write(90);
        top.write(90);
    }

    //Raises the leg
    void raise()
    {
        WriteMid(150);
        delay(30);
        WriteBot(30);
        delay(1000);
    }
    //sets the leg to resting height(90 - 90 ; mid - bot)
    void restleg()
    {
        WriteBot(90);
        WriteMid(90);
    }

    //Moves the leg forward in a walking motion
    void forward()
    {
        WriteTop(125);
    }

    void backward()
    {
        WriteBot(30);
    }


    //Reattaches each pin - useful incase you happen to change the pin. 
    void Reattach()
    {
        top.attach(PinTop);
        mid.attach(PinMid);
        bot.attach(PinBot);
    }
    //Writes the current held position to the servos
    void rewrite()
    {
        top.write(PosTop);
        mid.write(PosMid);
        bot.write(PosBot);
    }

    void WriteTop()
    {
        top.write(PosTop);
    }
    void WriteTop(int x)
    {
        top.write(x);
    } 
    
    void WriteMid()
    {
        mid.write(PosMid);
    }
    void WriteMid(int x)
    {
        mid.write(x);
    } 

    void WriteBot()
    {
        bot.write(PosBot);
    }
    void WriteBot(int x)
    {
        bot.write(x);
    }
    // Each servo has a corrosponding pin and position
    Servo top;
    int PinTop = 0;
    int PosTop = 0;

    Servo mid;
    int PinMid = 0;
    int PosMid = 0;

    Servo bot;
    int PinBot = 0;
    int PosBot = 0;

};



#endif