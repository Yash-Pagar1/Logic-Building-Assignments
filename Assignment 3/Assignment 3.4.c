//Input : a Output : A

//Input : D Output : a

#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c\t",cValue - 32);
    }

    else if((cValue >= 'A') && (cValue <= 'Z'))
    {
        printf("%c\t",cValue + 32);
    }
}
int main()
{
    char cValue = 0;

    printf("Enter Charecter : \n");
    scanf(" %c",&cValue);

    DisplayConvert(cValue);

    return 0;
}
