#include <stdio.h>

void bubblesort(int arr[], int size)
{
    int swapped;

    for (int step = 0; step < size - 1; step++)
    {
        swapped = 0;

        for (int i = 0; i < size - step - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;

                swapped = 1;
            }
        }

        if (swapped == 0)
        {
            break;
        }
    }
}

int main()
{
    int data[] = {6, 4, 7, 8, 1, 9, 5};

    int size = sizeof(data) / sizeof(data[0]);

    printf("Original array:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    bubblesort(data, size);

    printf("\nSorted array:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", data[i]);
    }

    return 0;
}
