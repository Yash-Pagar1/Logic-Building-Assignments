//Input: 10
//Output: 700

//Input: 3
//Output: 210

//Input: 1200
//Output: 84000

#include<stdio.h>

int DollarToInr(int iNo)
{
    int iReturn = 0;
    int iDollar = 70;

    iReturn = iNo * iDollar;

    return iReturn;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the amount in US Dollar : \n");
    scanf("%d",&iValue);

    iRet = DollarToInr(iValue);

    printf("The amount in Indian Rupees : %d\n",iRet);

    return 0;
}