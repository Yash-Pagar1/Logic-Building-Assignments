//Input : 9
//Output : Nine

//Input : -3
//Output : Three

//Input : 12
//Output : Invalid Number

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo > 9)
    {
        printf("Invalid Number\n");
    }

    switch (iNo)
    {
    case 1:
        printf("one\n");
        break;

        case 2:
        printf("Two\n");
        break;

        case 3:
        printf("Three\n");
        break;

        case 4:
        printf("Four\n");
        break;

        case 5:
        printf("Five\n");
        break;

        case 6:
        printf("Six\n");
        break;

        case 7:
        printf("Seven\n");
        break;

        case 8:
        printf("Nine\n");
        break;
    
        case 9:
        printf("Nine\n");
        break;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}