//Input: 15
//Output: 0.464515      

//Input: 7
//Output: 0.650321       

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqmeter = 0.0;
    dSqmeter = (iValue * 0.0929); 
    return dSqmeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter the Area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("The Area in Square Feet  is : %f\n",dRet);
    
    return 0;
}