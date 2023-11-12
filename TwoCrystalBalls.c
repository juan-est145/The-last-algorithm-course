#include "header.h"

int TwoCrystalBalls(bool array[], int length)
{
    int heightIncrement = floor(sqrt(length));
    int currentHeight = heightIncrement;
    int balls = 2;
    int maxLength = length;
    int minLength = 0;

    while (balls != 0 && minLength < maxLength)
    {
        if (array[currentHeight] == true && balls == 2)
        {
            maxLength = currentHeight;
            balls --;
        }
        else if(array[currentHeight] == false)
        {
            minLength = currentHeight;
            currentHeight += heightIncrement;
        }
        if(balls == 1)
        {
            while (array[minLength] != true && minLength < maxLength)
            {
                if(array[minLength] == false)
                {
                    minLength++;
                }
            }
            if(array[minLength] == true && minLength < maxLength)
            {
                balls --;
            }
        }
    }
    if(balls == 0)
    {
        return (minLength);
    }
    else
    {
        return (-1);
    } 
}