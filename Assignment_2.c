/////////////////////////////////////////
//
//   File Name : Assignment_2.c
//   Description : Accept one number from user and print that number of * on Screen
//   Author :     Yash Sunil Pagar
//   Date   :     07/05/2025
//
////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}