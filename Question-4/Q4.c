#include <stdio.h>

#define PI  3.14

int main(){

    float redius,area,circumference;

    printf("Enter Redius\n");
    scanf("%f",&redius);

    area = PI*redius*redius;
    circumference = 2 * PI * redius;

    printf("Area = %f  \n",area);
    printf("circumference = %f  \n",circumference);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


