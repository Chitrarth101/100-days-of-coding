#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], ch;
    int count = 0;

    scanf("%s", str);      // read the string
    scanf(" %c", &ch);     // read the character (space skips the newline)

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch)
            count++;
    }

    printf("%d\n", count);
    return 0;
}