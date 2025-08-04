/*
Input : "Marvellous Multi OS"
Output :
        4
*/
#include<stdio.h>

int Countapital(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Countapital(Arr);

    printf("Number of Capital Characters are : %d\n",iRet);

    return 0;
}