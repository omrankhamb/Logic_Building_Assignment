#include<stdio.h>
//Write a programme which Accepet Number from user and print all odd number up to N
void OddDisply(int iNo){
    
    int iCnt = 0;
    for(iCnt = 1 ; iCnt <=  iNo ; iCnt++)
    {
        if(iCnt % 2 != 0)
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

    OddDisply(iValue);
    
    return 0;
}
