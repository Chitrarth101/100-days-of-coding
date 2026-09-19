#include <stdio.h>

int countChars(const char *s) {
    int count = 0;
    while (s[count] != '\0') {
        count++;
    }
    return count;
}

int main(void) {
    char str[1000];

    // fgets so spaces are read as part of the input
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("0\n");
        return 0;
    }

    // Remove the trailing newline that fgets keeps
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    printf("%d\n", countChars(str));
    return 0;
}