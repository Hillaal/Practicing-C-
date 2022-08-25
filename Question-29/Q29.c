#include <stdio.h>

#define PRIME       (1)
#define NOT_PRIME   (0)

void PrintPrime(int firstLimit,int secondLimit);


int main(void){

    int num1,num2;

    printf("Enter First Number\n");
    scanf("%d",&num1);
    printf("Enter Second Number\n");
    scanf("%d",&num2);

    PrintPrime(num1,num2);

    getch();    /*to stop cmd from closing after running the .exe*/

    return 0;
}


PrintPrime(int firstLimit,int secondLimit)
{
    int counter1, counter2;
    unsigned char state;

    for (counter1 = firstLimit;counter1 <= secondLimit; counter1++)
    {
        state = PRIME;
        for(counter2 = 2; counter2 <= (int)(counter1/2); counter2++)
        {


            if((counter1 % counter2) == 0)
            {
                state = NOT_PRIME;
                break;
            }
            else
            {

            }
        }

        if(state == PRIME)
        {
            printf("\n%d",counter1);

        }

    }
}
