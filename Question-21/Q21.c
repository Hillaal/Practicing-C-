#include <stdio.h>



int main()
{
   unsigned char counterY;
   unsigned char counterX;


    for (counterY = 5; counterY >=1 ; counterY--)
    {
        for(counterX = 1; counterX <=counterY ; counterX++)
        {
            printf("* ");
        }

        printf("\n");
    }





    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

