#include <stdio.h>
#include <string.h>

int is_palindrome(char *str, int left, int right) {
    // base case
    if (left >= right) return 1;

    // mismatch case
    if (str[left] != str[right]) return 0;

    // recursive step
    return is_palindrome(str, left + 1, right - 1);
}

int main() {
    char s1[ ] = "racecar";
    char s2[ ] = "hello";
    char s3[ ] = "a";
    char s4[ ] = "abba";

    printf("is_palindrome(\"racecar\", 0, 6) => %d\n", is_palindrome(s1, 0, 6));
    printf("is_palindrome(\"hello\", 0, 4) => %d\n", is_palindrome(s2, 0, 4));
    printf("is_palindrome(\"a\", 0, 0) => %d\n", is_palindrome(s3, 0, 0));
    printf("is_palindrome(\"abba\", 0, 3) => %d\n", is_palindrome(s4, 0, 3));

    return 0;
}
