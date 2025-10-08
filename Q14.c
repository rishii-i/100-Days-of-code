#include <stdio.h>
#include <string.h>

int main() {
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);
    if (strchr("AEIOUaeiou", a)) {
        printf("Vowel.\n");
    } else {
        printf("Consonant.\n");
    }
    return 0;
}