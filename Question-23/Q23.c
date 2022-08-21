#include <stdio.h>

#define TRUE    (1)
#define FALSE   (0)


unsigned char CheckAlphabet(char x);


int main()
{
    unsigned char alphabetValidation;
    char character;

    printf("Enter character\n");
    scanf("%c",&character);

    alphabetValidation = CheckAlphabet(character);

    if(alphabetValidation == TRUE)
    {
        printf("Alphabet");
    }
    else
    {
        printf("Not Alphabet");
    }


    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}



unsigned char CheckAlphabet(char x)
{
    if( (x >= 65) && (x <= 122) )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}
