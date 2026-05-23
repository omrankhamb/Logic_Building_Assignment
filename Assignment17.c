#include<stdio.h>
//Write a programme which Accepet Number from user and display its Multiplication of Factors


void FactRev(int iNo){
    int iCnt = 0;
    int iRet = 1;
    for(iCnt = iNo/2; iCnt >0; iCnt--)
    {
        if((iNo % iCnt)== 0)
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

    FactRev(iValue);
    return 0;
}
