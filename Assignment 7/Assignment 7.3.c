//Input: 5
//Output: 8     (4 * 2)

//Input: -5
//Output: 8     (4 * 2)

//Input: 10
//Output: 3840    (10 * 8 * 6 * 4 * 2)

#include<stdio.h>

int EvenFactorial(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;     //Updater
    }

    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);

    printf("The Even Factorial of %d is : %d\n",iValue,iRet);

    return 0;
}