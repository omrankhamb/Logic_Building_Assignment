#include<stdio.h>
#include<stdlib.h>

//Accepet Number from user and Accepet one another number as NO , return freqecy of NO from it
int  Check(int Arr[],int iLength,int NO)
{
    int iCnt = 0;
    int iFrequency = 0;
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == NO)
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
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    printf("Enter the Number : ");
    scanf("%d",&iValue);

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

    iRet = Check(p,iSize,iValue);
    printf("Frequency of %d Is : %d ",iValue,iRet);

    free(p);

    return 0;
}