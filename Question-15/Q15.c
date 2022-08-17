#include <stdio.h>



int main()
{

    long long result = 1;
    long int num;
    long int power;
    long int counter;

    printf("Enter number\n");
    scanf("%d",&num);

    do
    {
      printf("Enter Positive Power\n");
      scanf("%d",&power);
    }
    while(num < 0);

    for(counter = 1; counter <= power; counter++)
    {
        result = result * num;
    }

    printf("result = %d",result);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

