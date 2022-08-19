#include <stdio.h>



int main()
{
    long int num;
    long int digitCounter = 0;



    do
    {
        printf("Enter positive Decimal number\n");
        scanf("%d",&num);
    }
    while(num < 0);

    if(0 == num){digitCounter = 1;}

    while(num)
    {
        digitCounter = digitCounter + 1;
        num = (long int) (num / 10);
    }

    printf("\nNumber of Digits is: %d\n",digitCounter);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

