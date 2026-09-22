#include <stdio.h>

int main() {
    char str1[10];
    printf("Enter the DS (A-Array, L-LL, T-Tree or G-Graph): ");
    scanf("%s", str1);
    
    if (str1[0] == 'A') {
        printf("Non Primitive, Linear, Static");
    }
    else if (str1[0] == 'T') {
        printf("Non Primitive, Non linear");
    }
    else if (str1[0] == 'L') {
        printf("Non Primitive, Linear, Dynamic");
    }
    else if (str1[0] == 'G') {
        printf("Non Primitive, Non linear");
    }
    else {
        printf("Unknown data structure");
    }
    
    return 0;
}
