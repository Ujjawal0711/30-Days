// Function Prototype


#include <stdio.h>

int add(int a, int b);
void swap(int *a, int *b); // Pass by reference

int main() {
    int x = 10, y = 20;
    printf("Sum: %d\n", add(x, y));
    
    printf("Before Swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After Swap: x=%d, y=%d\n", x, y);
    return 0;
}

int add(int a, int b) { return a + b; }

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
