#include <stdio.h>


int main(){

    int num,counter,flag = 0;

    /*scan number from the user and make sure he entered positive number*/
    do
    {
        printf("Enter Positive Number \n");
        scanf("%d",&num);
    }
    while(num <= 0);

    /*check if number is  perfect square or not*/
    for(counter = 1;counter <= (int)(num/2); counter++)
    {
        if(num == (counter * counter))
        {
            flag = 1;
            break;
        }
        else
        {
        }

    }

    if(1 == flag)
    {
        printf("Perfect Square");
    }
    else
    {
        printf("NOT Perfect Square");
    }

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


