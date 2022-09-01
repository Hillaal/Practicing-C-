#include <stdio.h>

int Sum(double x, double y);

int main(void){

    double num1,num2;
    int result;

    printf("enter first number\n");
    scanf("%lf",&num1);
    printf("\n\nenter Second number\n");
    scanf("%lf",&num2);

    result = Sum(num1,num2);

    printf("\n\nInteger floor of the sum = %d\n",result);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}



int Sum(double x, double y)
{
    return x + y ;
}
