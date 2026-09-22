#include <stdio.h>

void access(int a[], int n)
{
    int x;

    printf("---- Accessing elements of the array ----\n");
    printf("Enter the index: ");
    scanf("%d", &x);

    printf("Enter the index of the element to: ");
    printf("%d\n", x);
}

int main()
{
    int a[10];
    int n;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    access(a, n);

    return 0;
}
