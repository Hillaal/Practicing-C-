#include <stdio.h>

#define TRUE    1
#define FALSE   0

unsigned char CheckPowerOfTwo(long long number);

int main(void){

    long long num;
    unsigned char checkResult;

    printf("Enter Number\n\n");
    scanf("%d",&num);

    if(num <= 0)
    {
        printf("\n\nNumber Is NOT Power of Two");
    }
    else
    {
        if(CheckPowerOfTwo(num))
        {
            printf("\n\nNumber Is Power of Two");
        }
        else
        {
            printf("\n\nNumber Is NOT Power of Two");
        }
    }
    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


unsigned char CheckPowerOfTwo(long long number)

{   unsigned char flag = TRUE;

    while(number != 1)
    {
        if((number % 2) == 0)
        {
            number = number / 2;
        }
        else
        {
            flag = FALSE;
            break;
        }
    }

    return flag;

}
