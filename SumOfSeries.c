#include <stdio.h>

int main()
{
    int num, i;
    float sum = 0.0;
    printf("Read the integers from keyboard: ");
    scanf("%d", &num);
    for (i = 1; i <= num; ++i)
    {
        sum += 1.0 / i;
    }
    printf("Sum of reciprocal of n: (1+1/2+1/3+..........+1/%d)'s value: %f", num, sum);
    return 0;
}

