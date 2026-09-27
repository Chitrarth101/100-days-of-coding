#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[1000];

    // Read the full line (name may contain spaces)
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    name[strcspn(name, "\n")] = '\0';

    char *token = strtok(name, " ");

    while (token != NULL) {
        printf("%c.", toupper(token[0]));
        token = strtok(NULL, " ");
    }

    printf("\n");

    return 0;
}