/*

Input :  2395
Output :  1

Input :   1018
Output :  0

Input :    9000
Output :  0

Input :    922432
Output :  3

*/

#include<stdio.h>

int CountTwo(int iNo)
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
        if(iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("The Frequency of 2'S are : %d\n",iRet);

    return 0;
}