#include <stdio.h>


int main(){

    int counter,sum = 0;

    for(counter = 1; counter <= 100; counter++)
    {
        sum = sum + counter;
    }

    if(sum == 5050)
    {
         printf("sum of the first 100 integers = %d",sum);
    }
    else
    {
    }

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

