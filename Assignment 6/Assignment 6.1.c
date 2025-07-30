//Input : 75
//Output : Medium

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        printf("Invalid Input\n");
    }
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else if(iNo >= 100)
    {
        printf("Large\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Number(iValue);
    
    return 0;
}