#include <stdio.h>

unsigned char ToUpperCase(unsigned char character);

int main(void){

    char character;

    printf("Enter Character\n");

    scanf("%c",&character);

    if((character >= 'a') && (character <='z'))
    {
        printf("\n%c\n",ToUpperCase(character));
    }
    else
    {
        printf("\nInvaild input character");
    }



    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}



unsigned char ToUpperCase(unsigned char character)
{
    return (character - 32);
}
