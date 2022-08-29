#include <stdio.h>

unsigned char GetHeaterActiveTime(unsigned int temp);


int main(void)
{
    unsigned int array[10] = {0,30,60,90,100,15,45,75,95,101};
    unsigned char counter;

    for(counter = 0; counter < 10 ; counter++)
    {
        printf("Input Temperature = %d Activation Time = %d Minutes \n\n",array[counter],GetHeaterActiveTime(array[counter]));
    }

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


unsigned char GetHeaterActiveTime(unsigned int temp)
{
    if( (temp >= 0) && (temp < 30) )
       {
           return 7;
       }
    else if( (temp >= 30) && (temp < 60))
        {
            return 5;
        }
    else if( (temp >= 60) && (temp < 90) )
        {
            return 3;
        }
    else if( (temp >= 90) && (temp <= 100) )
        {
            return 1;
        }
    else
    {
        return 0;
    }
}
