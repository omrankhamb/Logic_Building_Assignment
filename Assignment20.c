#include<stdio.h>
//Write a programme which Accepet Number from user and return difference between summation of all its factors and non factors


int FactDiff(int iNo){
    int iCnt = 0;
    int iFactor = 0;
    int iNonFactor = 0;
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFactor += iCnt;
        }
        if((iNo % iCnt) != 0)
        {
            iNonFactor += iCnt;
        }
    }

    return iFactor - iNonFactor;
    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("%d",iRet);
    return 0;
}
