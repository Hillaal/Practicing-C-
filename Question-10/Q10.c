#include <stdio.h>

 void calculate(char op,int num1,int num2);

int main(){

    long int num1,num2;
    char operation;

    printf("Enter Operation\n");
    scanf("%c",&operation);

    printf("Enter First Number\n");
    scanf("%d",&num1);

    printf("Enter Second Number\n");
    scanf("%d",&num2);

    calculate(operation,num1,num2);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}



void calculate(char op,int num1,int num2)
{
    long int result;

    switch(op){

        case '*' :
        {
            result = num1 * num2;
            break;
        }

        case '/' :
        {
            result = num1 / num2;
            break;
        }

        case '+':
        {
            result = num1 + num2;
            break;
        }

        case '-':
        {
            result = num1 - num2;
            break;
        }

        default:
            {
               printf("Enter Valid Operation");
               return;
            }


    }

    printf("result = %d\n",result);

}


