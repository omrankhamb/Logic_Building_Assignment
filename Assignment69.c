#include<stdio.h>
#include<stdlib.h>

//Accepet Number from user and return freqency of 11 from it
int  Check(int Arr[],int iLength)
{
    int iCnt = 0;
    int iFrequency = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrequency++;
            
        }
       
    }

    return iFrequency;
}

int main()
{
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate Memory");
        return -1;
    }

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : %d ",iCnt + 1);
        scanf("%d",(p + iCnt));
    }

    iRet = Check(p,iSize);
    printf("Frequency of 11 Is : %d ",iRet);

    free(p);

    return 0;
}