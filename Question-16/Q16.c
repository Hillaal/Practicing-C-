#include <stdio.h>



int main()
{
    long int num;
    long int result = 0;
    long int digit;



    do
    {
        printf("Enter positive number to be reversed\n");
        scanf("%d",&num);
    }
    while(num < 0);

    while(num)
    {
        digit = num % 10;
        result = (result*10) + digit;
        num = (long int) (num / 10);
    }

    printf("reversed number is: %d",result);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

