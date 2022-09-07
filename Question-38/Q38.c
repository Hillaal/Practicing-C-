#include <stdio.h>

#define MASK    (0x80)

unsigned char CountOnes(unsigned char num);


int main(void){

    unsigned char result;
    unsigned char num;

    printf("Enter 8-bit unsigned integer number \n");

    scanf("%d",&num);

    result = CountOnes(num);

    printf("Result = %d",result);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}



unsigned char CountOnes(unsigned char num)
{
    unsigned char loopCounter;
    unsigned char onesCounter = 0;

    for(loopCounter = 0 ; loopCounter < 8 ; loopCounter++)
    {
        if( (num << loopCounter) & MASK)
        {
            onesCounter++;
        }
        else
        {
            /*pass*/
        }
    }

    return onesCounter;
}
