#include <main.h>

char* leet(char* input) {
    char replacements[5][2] = {
        {'a', '4'},
        {'e', '3'},
        {'o', '0'},
        {'t', '7'},
        {'l', '1'}
    };

    for (int i = 0; i < 5; i++) {
        char lower = replacements[i][0];
        char upper = lower - 'a' + 'A';
        char replace = replacements[i][1];

        for (int j = 0; input[j] != '\0'; j++) {
            if (input[j] == lower || input[j] == upper) {
                input[j] = replace;
            }
        }
    }

    return input;
}
