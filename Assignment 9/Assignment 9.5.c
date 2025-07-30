/*

Input :  2395
Output :  3

Input :   1018
Output :  3

Input :   9440
Output :  3

Input :   96672
Output :  1

*/

#include<stdio.h>

int Count(int iNo)
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
        if(iDigit < 6)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("The Frequency of Number that are less than 6 : %d\n",iRet);

    return 0;
}