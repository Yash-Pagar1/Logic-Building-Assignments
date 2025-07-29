//Input : 18
//Output : 1    3   5   7   9   11   13

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int i = 0;

    for(i = 1; i <= 5; i++)
    {
       printf("%d\t",iNo * i);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}