#include <stdio.h>

int main()
{
    int num, i, max;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the %d integers: ", num);
    for (i = 0; i < num; ++i)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < num; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The maximum number in the array is: %d", max);
    return 0;
}
