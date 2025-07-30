//Input: 5.3
//Output: 88.2026    

//Input: 10.4
//Output: 339.6224

#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;

    double dArea = 0.0;
    dArea = PI * fRadius * fRadius;
    return dArea;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("The Area of the Circle is : %f\n",dRet);
    
    return 0;
}