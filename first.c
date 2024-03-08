#include <stdio.h>
int main()
{
    int arr[5] = {1, 5, 9, 12, 54};
    int i = 0;
    while (i++ < sizeof(arr) / 4)
    {
        printf("%d\n", *(arr + i - 1));
    }
    return 0;
}
