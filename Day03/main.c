#include <stdio.h>
#include <stdlib.h>

void stackExample() {
    int x = 10; // Stored in Stack frame
    printf("Stack Address: %p\n", &x);
}

int main() {
    stackExample();
    
    // Heap Allocation
    int *h = (int*)malloc(sizeof(int));
    *h = 20;
    printf("Heap Address:  %p\n", h);
    
    free(h); // Always free heap memory!
    return 0;
}
