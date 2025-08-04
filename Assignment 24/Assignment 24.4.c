/*
Input : "marvellous"
Output : TRUE

Input : "Demo"
Output : TRUE

Input : "xyz"
Output : FALSE
*/
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
         if(*str=='a' || *str=='e' || *str=='i' || *str=='o' || *str=='u' ||
           *str=='A' || *str=='E' || *str=='I' || *str=='O' || *str=='U')
        {
            return TRUE;
        }
        str++;
    }
}
int main()
{
    char Arr[20];
    BOOL bRet = FALSE;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("It Contain Vowels\n");
    }
    else
    {
        printf("It does not contain Vowels\n");
    }

    return 0;
}