// Multiplication Function
// No arguments and no return value
#include <stdio.h>

void multi() {
    int a = 10, b = 5;
    printf("Multiplication: %d\n", a * b);
}

int main() {
    multi();
    return 0;
}

// No arguments but a return value
#include <stdio.h>

int multi() {
    int a = 10, b = 5;
    return a * b;
}

int main() {
    printf("Multiplication: %d\n", multi());
    return 0;
}

// Arguments but no return value
#include <stdio.h>

void multi(int a, int b) {
    printf("Multiplication: %d\n", a * b);
}

int main() {
    multi(10, 5);
    return 0;
}

// Arguments with a return value
#include <stdio.h>

int multi(int a, int b) {
    return a * b;
}

int main() {
    printf("Multiplication: %d\n", multi(10, 5));
    return 0;
}