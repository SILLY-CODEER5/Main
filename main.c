#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("the printing is :");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}