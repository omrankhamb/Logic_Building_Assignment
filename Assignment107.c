#include<stdio.h>

/*
INPUT : 5
OUTPUT : 5       *       4       *       3       *       2       *       1       *
*/

void Pattern(int iNo)
{
    char ch = 'A';

    int iCnt = 0;

    iCnt = iNo;

    while (iCnt >0)
    {
        printf("%d\t#\t",iCnt);
        iCnt--;
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