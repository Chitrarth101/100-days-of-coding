#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline character, if present
    str[strcspn(str, "\n")] = '\0';

    int spaces = 0, digits = 0, special = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (isspace((unsigned char)ch)) {
            spaces++;
        } else if (isdigit((unsigned char)ch)) {
            digits++;
        } else if (!isalpha((unsigned char)ch)) {
            // Not a letter, not a digit, not a space -> special character
            special++;
        }
        // else it's a letter, not counted in any category
    }

    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);

    return 0;
}