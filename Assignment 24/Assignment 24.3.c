/*
Input : "MarvellouS"
Output : 6  (8-2)
*/
#include<stdio.h>

int Differnce(char *str)
{
    int iCountCap = 0;
    int iCountSmall = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCap++;
        }
        else
        {
            iCountSmall++;
        }
        str++;
    }
    return iCountSmall - iCountCap;
}
int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = Differnce(Arr);

    printf("Differnce of Capital and Small Characters are  : %d\n",iRet);

    return 0;
}