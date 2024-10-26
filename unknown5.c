// Modulus Function
// No arguments and no return value
#include <stdio.h>

void mod() {
    int a = 10, b = 3;
    printf("Modulus: %d\n", a % b);
}

int main() {
    mod();
    return 0;
}

// No arguments but a return value
#include <stdio.h>

int mod() {
    int a = 10, b = 3;
    return a % b;
}

int main() {
    printf("Modulus: %d\n", mod());
    return 0;
}

// Arguments but no return value
#include <stdio.h>

void mod(int a, int b) {
    printf("Modulus: %d\n", a % b);
}

int main() {
    mod(10, 3);
    return 0;
}

// Arguments with a return value
#include <stdio.h>

int mod(int a, int b) {
    return a % b;
}

int main() {
    printf("Modulus: %d\n", mod(10, 3));
    return 0;
}