/*
Input : A
Output :
        Decimal     : 65
        Octal       : 101
        Hexadecimal : 0x41

*/
#include<stdio.h>

void Display(char ch)
{
    printf("Decimal : %d\n", ch);
    printf("Octal : %o\n", ch);
    printf("Hexadecimal : 0x%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the Charecter : \n");
    scanf(" %c",&cValue);

    Display(cValue);

    return 0;
}