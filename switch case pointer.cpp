#include <stdio.h>

void Row_Major(int B, int LR, int LC, int i, int j, int w, int N)
{
    int address;

    address = B + w * ((i - LR) * N + (j - LC));

    printf("Address of element [%d][%d] in Row Major order = %d\n",
           i, j, address);
}

void Column_Major(int B, int LR, int LC, int i, int j, int w, int M)
{
    int address;

    address = B + w * ((j - LC) * M + (i - LR));

    printf("Address of element [%d][%d] in Column Major order = %d\n",
           i, j, address);
}

int main()
{
    int a[10][10];
    int i, j, m, n, e;
    int x, y, B, LR, LC, w;
    int choice;

    printf("Enter no. of rows and columns of array (max 10): ");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the array:\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the element to calculate address: ");
    scanf("%d %d", &x, &y);

    printf("Enter the base address of the array: ");
    scanf("%d", &B);

    printf("Enter LR and LC values: ");
    scanf("%d %d", &LR, &LC);

    printf("Enter the size of (int): ");
    scanf("%d", &w);

    printf("\n1. Row Major\n");
    printf("2. Column Major\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            Row_Major(B, LR, LC, x, y, w, n);
            break;

        case 2:
            Column_Major(B, LR, LC, x, y, w, m);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
