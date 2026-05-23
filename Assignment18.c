#include<stdio.h>
//Write a programme which Accepet Number from user and display all its non-Factors


void NonFact(int iNo){
    int iCnt = 0;
    int iRet = 1;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            printf("%d ",iCnt);
        }
    }

    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    NonFact(iValue);
    return 0;
}
