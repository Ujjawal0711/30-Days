// Day 1 Code

// Goal: Print "Fizz" for multiples of 3, "Buzz" for 5, "FizzBuzz" for both.

#include <stdio.h>
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("%d FizzBuzz\n", i);
        else if (i % 3 == 0)
            printf("%d Fizz\n", i);
        else if (i % 5 == 0)
            printf("%d Buzz\n", i);
        else
            printf("%d\n", i);
    }
    return 0;
}
