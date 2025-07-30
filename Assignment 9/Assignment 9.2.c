/*

Input :  2395
Output :  There is no Zero

Input :   1018
Output :  It Contains Zero

Input : -1018
Output : It Contains Zero

Input :    9000
Output :  It Contains Zero

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOl;

BOOl ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }
}
int main()
{
    int iValue = 0;
    BOOl bRet = FALSE;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}