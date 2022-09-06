#include <stdio.h>

unsigned char Reverse(unsigned char num);

int main(void){

    unsigned char result;
    unsigned char num;


    printf("Enter 8-bits number \n");

    scanf("%d",&num);

    result = Reverse(num);

    printf("Result = %d",result);


    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}



unsigned char Reverse(unsigned char num)
{
    unsigned char counter = 0;
    unsigned char res=0;

    for(counter = 0; counter <8; counter++)
    {
        res = res + ( ((num & ( 0x01 << counter) ) >> counter)  << (7 - counter ));
    }
    return res;
}
