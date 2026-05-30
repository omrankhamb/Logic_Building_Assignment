#include<stdio.h>

typedef int bool;
#define TRUE 1
#define FALSE 0
//Write a programme which Accepet number from user and check whether it contains zer or not
bool DisplayDigit(int iNo){
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    bool bFlag = FALSE;
    while (iNo > 0)
    {
        if(iNo % 10  == 0)
        {
            bFlag = TRUE;
        }
        iNo = iNo /10;
    }
        return bFlag;
}

int main(){
    int iValue  = 0;
    bool bRet = FALSE;
    printf("Enter First Value  : ");
    scanf("%d",&iValue);

    bRet = DisplayDigit(iValue);
    if(bRet)
    {
        printf("contain zero\n");
    }
    else
    {
        printf("not contain zero");
    }
   
    
    return 0;
}
