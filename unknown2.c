#include <stdio.h>

void main () {
    char str[50];
    int vow, con;

    printf("Enter an input into the string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vow++;
            } else {
                con++;
            }
        }
    }

    printf("The number of vowels are: %d\n", vow);
    printf("The number of consonants are: %d\n", con);
}