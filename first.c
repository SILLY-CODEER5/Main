#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 9, 12, 54};
    int i = 0;
    while (i++ < sizeof(arr) / 4)
    {
        printf("%d\n", *(arr + i - 1));
    }
    int sum = 0;
    for (int i = 0; i < sizeof(arr) / 4; i++)
    {
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}