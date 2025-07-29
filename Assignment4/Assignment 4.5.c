/*
Input: 12
Output: -34    (16 -50)

Input: 10
Output: -29     (8 - 37)

*/
#include<stdio.h>

int  FactDiff(int iNo)
{
    int i = 0;
    int iFactSum = 0;
    int iNonFactSum = 0;

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) == 0)
        {
            iFactSum = iFactSum + i;
        }
        else
        {
            iNonFactSum = iNonFactSum + i;
        }
    }
    return iFactSum - iNonFactSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Addition of Factors & Non-Factors of %d is : %d\n",iValue,iRet);
    
    return 0;
}