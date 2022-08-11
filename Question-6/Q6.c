#include <stdio.h>


int main(){

    int num1,num2;

    printf("Enter First Number \n");
    scanf("%d",&num1);

    printf("Enter Second Number \n");
    scanf("%d",&num2);

    if(num1 == num2){
        printf("The Two Numbers are Equal\n");
    }
    else if(num1 > num2){
        printf("The Two Numbers are not Equal\n");
        printf("%d is higher than %d\n",num1,num2);
    }
    else{
        printf("The Two Numbers are not Equal\n");
        printf("%d is higher than %d\n",num2,num1);

    }

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


