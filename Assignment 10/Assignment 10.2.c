/*
Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output : 2

Input : 8462
Output : 0

*/

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }3
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("Number of Odd Digits are : %d\n",iRet);

    return 0;
}