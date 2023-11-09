#include <stdio.h>
#include <string.h>

long long int isPalindrome( char s[]) {
    int len = strlen(s);
    int  i, j;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        if (s[i] != s[j]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[1001];
    scanf("%s", s);
    int ans= isPalindrome(s);
    if (ans) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
