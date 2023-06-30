#include <main.h>
#include <stdlib.h>
#include <string.h>

char* leet(char* input) {
    char* encoded = malloc(strlen(input) + 1);  // Allocate memory for the encoded string
    strcpy(encoded, input);  // Copy the input string to the encoded string
    
    char replacements[5][2] = {
        {'a', '4'},
        {'e', '3'},
        {'o', '0'},
        {'t', '7'},
        {'l', '1'}
    };

    for (int i = 0; i < 5; i++) {
        for (int j = 0; encoded[j] != '\0'; j++) {
            if (encoded[j] == replacements[i][0] || encoded[j] == replacements[i][0] - 'a' + 'A') {
                encoded[j] = replacements[i][1];
            }
        }
    }

    return encoded;
}

