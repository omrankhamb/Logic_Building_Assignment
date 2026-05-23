#include<stdio.h>
//Write a programme which Accepet Number from user and Summation of all its non factors


int SumNonFact(int iNo){
    int iCnt = 0;
    int iRet = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iRet +=iCnt;
        }
    }

    return iRet;
    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);
    printf("%d",iRet);
    return 0;
}
