#include <stdio.h>
#include <string.h>

void main() {
    
    int a = 0, len;
    char str[10];
    
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for(int i = 0; i < len; i++) {
        if(a >= 0) {
            if(str[i] == '{') {
                ++a;
            }
            else if (str[i] == '}') {
                --a;
            }
        }
    }

    if (a == 0) {
        printf("The input string is valid.\n");
    } else {
        printf("The input string is invalid.\n");
    }
}