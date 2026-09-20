#include <stdio.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - 32;   // same as s[i] - ('a' - 'A')
    }

    // Print up to the newline
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; i++)
        putchar(s[i]);
    putchar('\n');

    return 0;
}