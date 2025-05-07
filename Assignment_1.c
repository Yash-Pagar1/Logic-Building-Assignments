/////////////////////////////////////////
//
//   File Name : Assignment_1.c
//   Description : Program to devide two Numbers
//   Author :     Yash Sunil Pagar
//   Date   :     07/05/2025
//
////////////////////////////////////////

#include<stdio.h>

int Devide(int No1,int No2)   //int datatype
{
   int iAns = 0;
   if(No2 == 0)
   {
    return -1;
   }
   iAns = No1 / No2;
   return iAns;
}
int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iret = 0;

    iret = Devide(iValue1,iValue2);

    printf("Division is : %d\n",iret);

    return 0;
}