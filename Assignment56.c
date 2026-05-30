#include<stdio.h>

//Write a programme which Accepet number from user and display  numbers in reverse order
void DisplayDigit(int iNo){
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo > 0)
    {
        printf("%d\n",iNo%10);
        iNo = iNo /10;
    }
    
}

int main(){
    int iValue  = 0;

    printf("Enter First Value  : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);
   
    
    return 0;
}
