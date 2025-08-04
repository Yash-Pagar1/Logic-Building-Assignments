#include<stdio.h>

void DisplayASCII()
{
    int i = 0;

    printf("______________ASCII TABLE______________");

    for(i = 0; i <= 255; i++)
    {
        if(i >= 32 && i <= 126)
        {
            printf("%d\t%x\t%0\t%c\n",i,i,i,i);
        }
        else
        {
            printf("%d\t%x\t%o\n");
        }
        
    }
}
int main()
{
    DisplayASCII();

    return 0;
}