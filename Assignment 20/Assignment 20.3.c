/*
Input :     N : 6

            NO : 66

        Elements : 85   66  3   66  93  88

Output : 3

Input :     N : 6

            NO : 93

        Elements : 85   66  3   66  93  88

Output : 4

Input :     N : 6

            No : 12

        Elements : 85   11  3   15  11  111

Output : -1
*/

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt = iLength - 1; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            return iCnt;
        }
    }
    return -1;
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

    iRet = LastOcc(p, iSize, iValue);

    if(iRet == -1)
    {
        printf("Number is not Found\n");
    }
    else
    {
        printf("The Index of %d is : %d\n",iValue,iRet);
    }

    free(p);

    return 0;
}