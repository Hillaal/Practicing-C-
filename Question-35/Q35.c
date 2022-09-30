#include <stdio.h>

double Fibonacci(int x);


int main(void){
char * Array[] = { "ECP 621", "Embedded", "Software", "Development"};

const char * * ptrArray = &Array;





printf ("%d", sizeof(Array[1]));
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
