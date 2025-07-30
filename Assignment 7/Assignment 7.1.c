//Input: 5
//Output: *  *  *  *  *  #  #  #  #  #

//Input: 6
//Output: *  *  *  *  *  *  #  #  #  #  #  #

//Input: -5
//Output: *  *  *  *  *  #  #  #  #  #

//Input: 2
//Output:   *  *  #  #  

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo * 2; iCnt++)
    {
        if(iCnt < iNo)
        {
            printf("*\t");
        }
        else
        {
            printf("#\t");
        }
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

//Time Complexity = O(2n)