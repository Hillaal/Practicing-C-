#include <stdio.h>

#define PI  3.14

int main(){

    float redius;
    double area,circumference;

    printf("Enter Redius\n");
    scanf("%f",&redius);

    area = PI*redius*redius;
    circumference = 2 * PI * redius;

    printf("Area = %lf  \n",area);
    printf("circumference = %lf  \n",circumference);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


