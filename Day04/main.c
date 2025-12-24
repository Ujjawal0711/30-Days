#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *ptr = arr; // Points to arr[0]

    printf("Array Index 1: %d\n", arr[1]);
    printf("Pointer Math:  %d\n", *(ptr + 1)); // Same as arr[1]
    
    // Iterate using pointer
    for(int i = 0; i < 3; i++) {
        printf("%d ", *(ptr + i));
    }
    return 0;
}
