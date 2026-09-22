#include <stdio.h>

void delete (int arr[], int n, int pos) {
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
}

int main () {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;
    delete (arr, n, pos);
    n--;
    printf ("array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf ("%1.d", arr[i]);
    }
    return 0;
}
