#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000], temp[2000];

    scanf("%s", str1);
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not rotation\n");
        return 0;
    }

    // Concatenate str1 with itself
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of temp
    if (strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");