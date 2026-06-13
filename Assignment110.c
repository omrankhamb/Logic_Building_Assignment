#include<stdio.h>

/*

INPUT : 5
output :`#       1       *       #       2       *       #       3       *       #       4       *       #       5       * 
*/
void Pattern(int iNo)
{
    for(int iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t",iCnt*2);
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter  Number : ");
    scanf("%d",&ivalue);

    Pattern(5);
    return 0;
    
}

