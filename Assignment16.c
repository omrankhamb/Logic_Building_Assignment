#include<stdio.h>
//Write a programme which Accepet Number from user and display its Multiplication of Factors


int MultiFact(int iNo){
    int iCnt = 0;
    int iRet = 1;
    for(iCnt = 1; iCnt <= iNo/2 ; iCnt++)
    {
        if((iNo % iCnt)== 0)
        {
            iRet *=iCnt;
        }
    }

    return iRet;
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);
    return 0;
}
