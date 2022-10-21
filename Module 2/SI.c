#include <stdio.h>
int main()

{
    int p;
    int r;
    int t;
    int SI;

    printf("Enter the Pricipal Amount: ");
    scanf("%d", &p);

    printf("Enter the Rate Of Interest: ");
    scanf("%d", &r);

    printf("Enter the Time(in years): ");
    scanf("%d", &t);

    SI = p*r*t/100;

    printf("Simple Interest is: %d", SI);

    return 0;
} 