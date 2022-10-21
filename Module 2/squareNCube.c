#include <stdio.h>
int main()
{
    int num;
    int square;
    int cube;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num*num;
    cube = square*num;

    printf("The square of the number is %d.\n", square);
    printf("The cube of the number is %d.", cube);

    return 0;
}