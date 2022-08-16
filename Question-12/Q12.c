#include <stdio.h>


int main(){

    long int counter;
    long int num;
    long long factorial = 1;

    do
    {
      printf("Enter Positive Integer\n");
      scanf("%d",&num);
    }
    while(num < 0);

    for(counter = 1; counter <= num; counter++)
    {
        factorial = factorial * counter;
    }

    printf("Factorial = %d\n",factorial);


    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

