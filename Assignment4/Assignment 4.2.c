/*
Input: 12
Output: 5 7 8 9 10 11

Input: 13
Output: 2 3 4 5 6 7 8 9 10 11 12

Input: 10
Output: 3 4 6 7 8 9

*/
#include<stdio.h>

void FactRev(int iNo)
{
    int i = 0;

    for(i = (iNo/2); i >= 1; i--)
    {
        if(iNo % i == 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

      FactRev(iValue);
    
    return 0;
}