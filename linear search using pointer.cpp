#include <stdio.h>

void linear(int a[], int n, int ele)
{
    int i, x = 0;

    for(i = 0; i < n; i++)
    {
        if(*(a + i) == ele)
        {
            printf("The element found at position: %d\n", i);
            printf("Element found at index: %d\n", i);

            x = 1;
            break;
        }
    }

    if(x == 0)
    {
        printf("Element not found");
    }
}

int main()
{
    int a[10], i, ele, n, pos;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &ele);

    linear(a, n, ele);

    return 0;
}
