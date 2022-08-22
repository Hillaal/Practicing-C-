#include <stdio.h>

#define POSITIVE    (1)
#define NEGATIVE    (0)

unsigned char CheckNegative(int num);


int main()
{
    int  num;

    printf("Enter Number\n");
    scanf("%d",&num);

    if(CheckNegative(num) == NEGATIVE)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Positive Number\n");
    }



    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


unsigned char CheckNegative(int num)
{
    if(num < 0)
    {
        return NEGATIVE;
    }
    else
    {
        return POSITIVE;
    }

}
