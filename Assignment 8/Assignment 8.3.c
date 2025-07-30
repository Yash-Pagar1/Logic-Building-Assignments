//Input: 5
//Output: 5000

//Input: 12
//Output: 12000

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Distance in KiloMeters : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("The Distance in Meters is : %d\n",iRet);
    
    return 0;
}