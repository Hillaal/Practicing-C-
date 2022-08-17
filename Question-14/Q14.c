#include <stdio.h>




int main()
{
    unsigned char counter;

    for(counter = 65 ; counter < 91 ; counter ++)
    {
            printf("%c\n",counter);
    }

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}

