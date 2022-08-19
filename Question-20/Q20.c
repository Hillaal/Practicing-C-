#include <stdio.h>

#define ROWS    (7)

int main()
{
   unsigned char counterY;
   unsigned char counterX;


    for (counterY = 0; counterY < ROWS ; counterY++)
    {
        for(counterX = counterY; counterX < ROWS - 1 ; counterX++)
        {
            printf(" ");
        }
        for(counterX = 0; counterX < (2*counterY) +1 ; counterX++)
        {
            printf("*");
        }
        printf("\n");
    }




    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

