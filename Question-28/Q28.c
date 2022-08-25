#include <stdio.h>

#define TRUE    (1)
#define FALSE   (0)


unsigned char CheckMultiple(int num1,int num2);

int main(void){
    int num1,num2;

    printf("Enter First Number\n");
    scanf("%d",&num1);
    printf("Enter Second Number\n");
    scanf("%d",&num2);

    if(CheckMultiple(num1,num2) == TRUE)
    {
        printf("\nTRUE: First number is Multiple of the Second number\n");
    }
    else
    {
        printf("\nFalse: First number is NOT Multiple of the Second number\n");
    }

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


unsigned char CheckMultiple(int num1,int num2)
{
    if( (num1 % num2)  == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
