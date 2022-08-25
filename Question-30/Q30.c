#include <stdio.h>

void Swap(int* x, int* y);

int main(void){

    int num1,num2;

    printf("Enter First Number\n");
    scanf("%d",&num1);
    printf("Enter Second Number\n");
    scanf("%d",&num2);

    Swap(&num1, &num2);
    printf("first number = %d\n",num1);
    printf("second number = %d\n",num2);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


void Swap(int* x, int* y)
{
    *x = (*x) + (*y);
    *y = (*x) - (*y);
    *x = (*x) - (*y);
}
