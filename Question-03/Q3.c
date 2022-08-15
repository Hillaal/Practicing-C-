#include <stdio.h>

float CelsiusTOFahrenheit(float degreeCelsius);

int main(){

    double degreeC,degreeF;
    printf("Enter Degree Celsius\n");
    scanf("%lf",&degreeC);

    degreeF = CelsiusTOFahrenheit(degreeC);
    printf("Degree Fahrenheit = %lf  \n",degreeF);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


float CelsiusTOFahrenheit(float degreeCelsius){

    return ( (degreeCelsius*1.8) + 32 );

}
