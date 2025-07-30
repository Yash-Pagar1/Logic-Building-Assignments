//Input: 10
//Output: -12.2222      (10-32) * (5/9)

//Input: 34
//Output: 1.11111       (34-32) * (5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;
    dCelsius = ((fTemp - 32) * (5.0/9.0));
    return dCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the Temprature in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("The Temprature in Celcius is : %f\n",dRet);
    
    return 0;
}