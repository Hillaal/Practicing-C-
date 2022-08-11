#include <stdio.h>


int main(){

    int num1,num2,num3,smallest;

    printf("Enter First Number \n");
    scanf("%d",&num1);

    printf("Enter Second Number \n");
    scanf("%d",&num2);

    printf("Enter Third Number \n");
    scanf("%d",&num3);

    smallest = num1;

    if(num2 <= smallest){smallest = num2;}
    if(num3 <= smallest){smallest = num3;}

    printf("The smallest number is: %d\n",smallest);



    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


