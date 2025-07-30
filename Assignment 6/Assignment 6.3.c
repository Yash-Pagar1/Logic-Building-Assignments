//Input : 5
//Output : 120      (5 * 4 * 3 * 2 * 1)

//Input : -5
//Output : 120      (5 * 4 * 3 * 2 * 1)

//Input : 4
//Output : 24       (4 * 3 * 2 * 1)

#include<stdio.h>

int Factorial(int iNo)
{
    int i = 0; 
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
       iFact = iFact * i;
    }
    return iFact;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of Number is %d is : %d\n",iValue,iRet);
    
    return 0;
}