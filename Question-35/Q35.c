#include <stdio.h>

double Fibonacci(int x);


int main(void){

    long result;
    int num;

    printf("Enter Integer Number \n");
    scanf("%d",&num);

    result = Fibonacci(num);

    printf("Result = %d \n",result);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


double Fibonacci(int x)
{
    if( (x == 0) || (x == 1) )
    {
        return x;
    }
    else
    {
        return (Fibonacci( x - 1 ) + Fibonacci((x - 2)) );
    }
}
