#include <stdio.h>

int main()
{
    int num1, num2, result;
    printf("Read the integers from keyboard: ");
    scanf("%d %d", &num1, &num2);
    result = num1 & num2;
    printf("The Answer after ANDing is: %d", result);
    return 0;
}

