#include <stdio.h>
#include <math.h>
int main()

{
    float r;
    float t;
    float p;
    float CI;
    float a;

    printf("Enter principal value: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter timeperiod(in years): ");
    scanf("%f", &t);

    a = p * pow((1+(r/100)),t);
    CI = a - p;

    printf("Compound interest is %f", CI);

    return 0;
}