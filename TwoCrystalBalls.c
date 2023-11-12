#include "header.h"

int TwoCrystalBalls(bool array[], int length)
{
    int CurrentHeight = floor(sqrt(length));
    int balls = 2;
    int MaxLength = length;
    int MinLength = 0;

    while (balls != 0)
    {
        if (array[CurrentHeight] == true && balls == 2)
        {
            MaxLength = CurrentHeight;
            balls --;
        }
        else if(array[CurrentHeight] == false)
        {
            MinLength = CurrentHeight;
            CurrentHeight *= 2;
        }
        if(balls == 1)
        {
            while (array[MinLength] != true)
            {
                if(array[MinLength] == false)
                {
                    MinLength++;
                }
            }
            balls--;
        }
    }
    
}