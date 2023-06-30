#include "main.h"
#include <stdio.h>

char* _strcat(char* dest, const char* src) {
    char* ptr = dest;

    // Find the end of the destination string
    while (*ptr != '\0') {
        ptr++;
    }

    // Append characters from src to dest
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    // Add the terminating null byte
    *ptr = '\0';

    return dest;
}

int main() {
    char dest[100] = "Hello, ";
    const char* src = "world!";

    printf("Before concatenation: %s\n", dest);

    _strcat(dest, src);

    printf("After concatenation: %s\n", dest);

    return 0;
}

