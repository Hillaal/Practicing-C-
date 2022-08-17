#include <stdio.h>

#define TRUE    (1)
#define FALSE   (0)


int main()
{

    long int counter;
    long int num;
    unsigned char prime = TRUE;

    do
    {
      printf("Enter Positive Integer\n");
      scanf("%d",&num);
    }
    while(num < 0);

    for(counter = 2; counter <= (long int)(num/2); counter++)
    {
        if( (num % counter) == 0)
        {
            prime = FALSE;
            break;
        }
        else
        {
            //prime
        }
    }

    if(prime == TRUE)
    {
        printf("Number Is Prime\n");
    }
    else
    {
        printf("Number Is Not Prime\n");
    }



    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

