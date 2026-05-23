#include<stdio.h>
//Write a programme which Accepet Number from user and print its number line

void Disply(int iNo){
    
    int iCnt = 0;
    for(iCnt = iNo ; iCnt <=  -iNo ; iCnt++)
    {
        printf("%d ",iCnt);
    }
    
}

int main(){
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Disply(iValue);
    
    return 0;
}
