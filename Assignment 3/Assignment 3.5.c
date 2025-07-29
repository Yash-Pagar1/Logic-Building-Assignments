// Input : E    Output : True
// Input : d    Output : False

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Charecter : \n");
    scanf(" %c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("it is not Vowel\n");
    }

    return 0;

}