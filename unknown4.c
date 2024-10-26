// Division Function
// No arguments and no return value
#include <stdio.h>

void div() {
    float a = 10.0, b = 5.0;
    printf("Division: %.2f\n", a / b);
}

int main() {
    div();
    return 0;
}

// No arguments but a return value
#include <stdio.h>

float div() {
    float a = 10.0, b = 5.0;
    return a / b;
}

int main() {
    printf("Division: %.2f\n", div());
    return 0;
}

// Arguments but no return value
#include <stdio.h>

void div(float a, float b) {
    if (b != 0) {
        printf("Division: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero!\n");
    }
}

int main() {
    div(10.0, 5.0);
    return 0;
}

// Arguments with a return value
#include <stdio.h>

float div(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    printf("Division: %.2f\n", div(10.0, 5.0));
    return 0;
}