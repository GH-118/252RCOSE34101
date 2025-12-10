include <stdio.h>

void print_header(void) {
    printf("==== OS Lab Git Practice ====\n");
}

void print_numbers(int n) {
    printf("Numbers from 1 to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

int factorial(int n) {
    if (n < 0) {
        return 0;
    }
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    print_header();
    print_numbers(5);
    int n = 5;
    int fact = factorial(n);
    printf("factorial(%d) = %d\n", n, fact);
    return 0;
}
