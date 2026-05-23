#include<stdio.h>
//Write a programme which Accepet Number from user and return difference between summation of all its factors and non factors


void Pattern(int iNo){
    if(iNo < 0 ){
        iNo = -iNo;
    }
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <=  iNo ; iCnt++)
    {
        printf("$ * ");
    }
    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}
