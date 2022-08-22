#include <stdio.h>


long long Cube(int num);


int main()
{
    long long result;
    int  num;

    printf("Enter Number\n");
    scanf("%d",&num);

    result = Cube(num);

    printf("Result = %d",result);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


long long Cube(int num)
{
    return num*num*num;
}
