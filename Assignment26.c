#include<stdio.h>
//Write a programme which Accepet Number from user and print 5 multiples of N

void MultiplDisplay(int iNo){
    
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
    {
        printf("%d ",iNo*iCnt);
        
    }
    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    MultiplDisplay(iValue);
    
    return 0;
}
