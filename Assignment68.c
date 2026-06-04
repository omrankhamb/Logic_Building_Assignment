#include<stdio.h>
#include<stdlib.h>

//Accepet Number from user and check whether number contains 11 in it or not

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0;
    int iCntEven = 0;
    int iCntOdd = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
       
    }

    return FALSE;
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unablt to allocate Memory");
        return -1;
    }

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : %d ",iCnt + 1);
        scanf("%d",(p + iCnt));
    }

    bRet = Check(p,iSize);
    if(bRet)
    {
        printf("11 is present");
    }
    else{
        printf("11 is not present");
    }

    free(p);


    return 0;
}