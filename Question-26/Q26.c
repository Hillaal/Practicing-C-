#include <stdio.h>

#define ODD    (1)
#define EVEN   (0)

unsigned char CheckNumber(int num);

int main(void){
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);

    if(0 == num)
    {
        printf("Neutral Number\n");

    }
    else if( (num != 0) && (CheckNumber(num) == EVEN) )
    {
        printf("Even Number\n");
    }
    else if(CheckNumber(num) == ODD)
    {
        printf("Odd Number\n");
    }

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


unsigned char CheckNumber(int num)
{

    return (num % 2);
}
