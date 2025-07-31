/*
Input :     N : 6

            NO : 66

        Elements : 85   66  3   66  93  88

Output : 2

Input :     N : 6

            No : 12

        Elements : 85   11  3   15  11  111

Output : 0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iSize = 0, iCnt = 0,iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the %d Elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }

     printf("Enter the Number that you want to find  : \n");
    scanf("%d",&iValue);

    iRet = Frequency(p, iSize, iValue);

    printf("The Frequency of %d is : %d\n",iValue,iRet);

    free(p);

    return 0;
}