#include <stdio.h>

int main(void)
{
    int i, n;
    float sum = 0.0, average, array[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &array[i]);
        sum += array[i];
    }

    average = sum / n;
    printf("Average = %.2f \n", average);

    return 0;
}







