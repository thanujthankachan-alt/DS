#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int n1, n2, i, j;

   
    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements for the first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    
    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements for the second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    
    for(i = 0; i < n1; i++) {
        merged[i] = a[i];
    }

    for(j = 0; j < n2; j++) {
        merged[i + j] = b[j];
    }

  
    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    printf("\n");
    return 0;
}

