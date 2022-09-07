#include <stdio.h>

#define MASK    (0x8000000)

unsigned char CountOnes(unsigned int num);


int main(void){

    unsigned char result;
    unsigned int num;

    printf("Enter unsigned integer number \n");

    scanf("%d",&num);

    result = CountOnes(num);

    printf("Result = %d",result);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}



unsigned char CountOnes(unsigned int num)
{
    unsigned char loopCounter;
    unsigned char onesCounter = 0;

    for(loopCounter = 0 ; loopCounter < 32 ; loopCounter++)
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
