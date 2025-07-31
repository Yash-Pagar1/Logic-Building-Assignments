/*
Input :     N : 6

            No : 66

        Elements : 85   66  11   80  93  88

Output : True

Input :     N : 6

            No : 12

        Elements : 85   11  3   15  11  111

Output : False
*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE;
            break;
        }
    }
}
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;
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

    printf("Enter the number that you want to find : \n");
    scanf("%d",&iValue);

   bRet = Check(p, iSize, iValue);

   if(bRet == TRUE)
   {
    printf("Number is Present\n");
   }
   else
   {
    printf("Number is Absent\n");
   }

    free(p);

    return 0;
}