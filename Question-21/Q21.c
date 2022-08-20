#include <stdio.h>





int main()
{
   unsigned char counterY;
   unsigned char counterX;
   unsigned char rowsNo;

   do{
        printf("ENTER NUMBER OF ROWS\n");
        scanf("%d",&rowsNo);
        printf("\n");
   }while(rowsNo <= 0);

    for (counterY = 1; counterY <= rowsNo ; counterY++)
    {
        for(counterX = 1; counterX <=rowsNo ; counterX++)
        {
            if ( (counterX == counterY ) || (counterX == rowsNo - counterY + 1 ))
            {
                printf(" * ");

            }
            else
            {
                printf(" ");

            }

        }

        printf("\n");
    }


    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

