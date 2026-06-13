#include<stdio.h>

/*
INPUT : 5
OUTPUT : A  B   C   D   E
*/

void Pattern(int iNo)
{
    char ch = 'A';

    int iCnt = 0;

    for(iCnt = 1,ch = 'A' ;iCnt <= iNo ; iCnt++)
    {
        printf("%c\t",ch);
        ch++;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number os elements : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}