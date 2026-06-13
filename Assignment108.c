#include<stdio.h>

/*

INPUT : 5
output : 
*/
void Pattern(int iNo)
{
    for(int iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%d\t*\t",iCnt);
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

