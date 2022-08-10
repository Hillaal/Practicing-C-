#include <stdio.h>


int Fun(int num1, int num2);

int main(){

    int x,y,result;

    printf("Enter the first number\n");
    scanf("%d",&x);
    printf("Enter the second number\n");
    scanf("%d",&y);

    result = Fun(x,y);

    printf("Result = %d",result);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

int Fun(int num1, int num2){
    return  ((num1 + num2) * 3) - 10 ;
}
