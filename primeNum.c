#include <stdio.h>
int main()
{
    int num, i, flag = 0;
    printf("Please enter any number : ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (num == 1)
    {
        printf("Prime number?: No");
    }
    else
    {
        if (flag == 0)
            printf("Prime number?: Yes");
        else
            printf("Prime number?: No");
    }
    return 0;
}