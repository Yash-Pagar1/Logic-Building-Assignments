//Input : 5
//Output : $    *    $  *   $   *   $   *   $   * 

//Input : 3
//Output : $    *    $  *   $   *   

//Input : 3
//Output : $    *    $  *   $   *  

#include<stdio.h>

void Pattern(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int i = 0;

    for(i = 0; i < iNo; i++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}