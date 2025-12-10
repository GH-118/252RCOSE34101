#include <stdio.h>

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

int main(void) {
    print_header();
    print_numbers(5);
    return 0;
}
