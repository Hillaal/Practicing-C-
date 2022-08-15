#include <stdio.h>

int main(){

    int grade;

    /*scan grade from the user and make sure he entered positive number*/
    do
    {
        printf("Enter Grade Percentage\n");
        scanf("%d",&grade);
    }
    while(grade < 0);


    if (grade >= 85)
    {
        printf("Excellent");
    }
    else if((grade < 85) && (grade >= 75) )
    {
        printf("Very Good");
    }
    else if((grade < 75) && (grade >= 65) )
    {
        printf("Good");
    }
    else if((grade < 65) && (grade >= 50) )
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


