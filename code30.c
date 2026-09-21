#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';   // strip trailing newline

    int len = strlen(s);
    int isPalindrome = 1;

    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}