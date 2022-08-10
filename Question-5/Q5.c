#include <stdio.h>


int main(){

    unsigned char character;

    printf("Enter Character\n");
    scanf("%c",&character);
    printf("ASCII VALUE IS: %d",character);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}
