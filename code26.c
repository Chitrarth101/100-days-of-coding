#include <stdio.h>

int main(void) {
    char str[1000];

    // fgets so spaces are read as part of the input
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;
    }

    // Stop at the null terminator or the trailing newline
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}