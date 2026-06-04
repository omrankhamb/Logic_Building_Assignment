#include<stdio.h>
#include<stdlib.h>

//Accepet Number from user and return differencr between freqeucy of even number and odd numbers

int Freqency(int Arr[],int iLength)
{
    int iCnt = 0;
    int iCntEven = 0;
    int iCntOdd = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCntEven++;   
        }
        else{
            iCntOdd++;
        }
    }

    return iCntEven - iCntOdd;
}

int main()
{
    int iSize = 0, iRet = 0 ,iCnt = 0;
    int *p = NULL;

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

    iRet = Freqency(p,iSize);
    printf("Result is %d",iRet);

    free(p);


    return 0;
}