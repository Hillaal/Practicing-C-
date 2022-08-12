#include <stdio.h>
#include <math.h>

int main(){

    int num,root;

    /*scan number from the user and make sure he entered positive number*/
    do
    {
        printf("Enter Positive Number \n");
        scanf("%d",&num);
    }
    while(num <= 0);

    /*get square root of number*/
    root = sqrt(num);

    /*check if number is  perfect square or not*/
    if (num == (root*root))
    {
        printf("Perfect Square");
    }
    else
    {
        printf("NOT Perfect Square");
    }



    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


