#include <stdio.h>

 void calculate(char op,float num1,float num2);

int main(){

    float num1,num2;
    char operation;

    printf("Enter Operation from: + or - or * or / \n");
    scanf("%c",&operation);

    printf("Enter First Number\n");
    scanf("%f",&num1);

    printf("Enter Second Number\n");
    scanf("%f",&num2);

    calculate(operation,num1,num2);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}



void calculate(char op,float num1,float num2)
{
    double result;

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
               printf("Error: Enter Valid Operation");
               return;
            }


    }

    printf("%f %c %f = %lf\n",num1,op,num2,result);

}


