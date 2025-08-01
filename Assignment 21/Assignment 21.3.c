/*
Input :     N : 6

        Elements : 85   66  3   66  93  88

Output : 90 (93 - 3)
*/

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0,iMax = 0;
    int iMin = Arr[iCnt];

   for(iCnt = 0; iCnt < iLength;iCnt++)
   {
    if(Arr[iCnt] > iMax)
    {
        iMax = Arr[iCnt];
    }
    else if(Arr[iCnt] < iMin)
    {
        iMin = Arr[iCnt];
    }
   }
   return iMax - iMin;
}
int main()
{
    int iSize = 0, iCnt = 0,iRet = 0;
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

     iRet = Difference(p, iSize);

     printf("Smallest Number is : %d\n",iRet);

     free(p);

    return 0;
}