#include <stdio.h>

unsigned int countHoles (int num);

int main(void){

    int num;

    printf("Enter Number\n");
    scanf("%d",&num);

    printf("Number of Holes = %d\n",countHoles(num));

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

unsigned int countHoles (int num)
{
    int digit;
    unsigned int holes = 0;

    while(num != 0)
    {
        digit = num % 10;

        if(digit == 8)
        {
            holes = holes + 2;
        }
        else if( (digit == 0) || (digit == 4) || (digit == 6) || (digit == 9))
        {
            holes = holes + 1;
        }

        num = num / 10;
    }

    return holes;

}
