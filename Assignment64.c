#include<stdio.h>
#include<stdlib.h>

//Accepet Number from user and dsplay all such elements which are divisible by 3 and 5

void Display(int Arr[],int iLength)
{
    int iCnt = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 3 == 0 && Arr[iCnt] % 5 == 0)
        {
            printf("%d\t",Arr[iCnt]);
        }   
        
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt =0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(sizeof(int)*iSize);

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
    }

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",(p+iCnt));
    }

    Display(p,iSize);

    free(p);
    
    return 0;
}