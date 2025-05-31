#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);


    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    if (lowercase_vowel || lowercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
