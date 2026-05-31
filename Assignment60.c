#include<stdio.h>


//Write a programme which Accepet number from user and count freqency of Digit are less than 6
int Count(int iNo){
    int iCount = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo > 0)
    {
        if(iNo % 10 < 6)
        {
            iCount++;
        }
        iNo = iNo /10;
    }
        return iCount;
}

int main(){
    int iValue  = 0;
    int iRet = 0;
    printf("Enter First Value  : ");
    scanf("%d",&iValue);

    iRet = Count(iValue);
    printf("%d",iRet);
    
   
    
    return 0;
}
