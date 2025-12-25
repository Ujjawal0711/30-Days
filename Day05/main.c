#include <stdio.h>

int stringLength(char *str) {
    int len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char myName[] = "Gemini";
    printf("Length of '%s' is %d\n", myName, stringLength(myName));
    return 0;
}
