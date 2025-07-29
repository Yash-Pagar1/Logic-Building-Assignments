/*
Input: 12
Factors: 1 2 3 4 6
Output: 144

Input: 13
Factors: 1 (prime number)
Output: 1

Input: 10
Factors: 1 2 5
Output: 10

*/
#include<stdio.h>

int MultiFact(int iNo)
{
    int i = 0;
    int iMult = 1;

    for(i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }
    return iMult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = MultiFact(iValue);

    printf("%d",iRet);
    
    return 0;
}