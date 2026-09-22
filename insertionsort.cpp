#include <stdio.h>

void insertion_sort(int arr[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = arr[step];
        int j = step - 1;

        while (j >= 0 && key < arr[j])
        {
            arr[j + 1] = arr[j];
            --j;
        }

        arr[j + 1] = key;
    }

    printf("Internal array:");
    for (int i = 0; i < size; i++)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{
    int data[] = {6, 7, 4, 8, 1, 9, 5};

    int size = sizeof(data) / sizeof(data[0]);

    insertion_sort(data, size);

    printf("\nSorted array:");

    for (int i = 0; i < size; i++)
    {
        printf(" %d", data[i]);
    }

    return 0;
}
