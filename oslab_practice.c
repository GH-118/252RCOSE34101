#include <stdio.h>
#include <stddef.h>

struct Student {
    char name[32];
    int id;
};

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

double average(const int *arr, size_t len) {
    if (len == 0) {
        return 0.0;
    }
    long long sum = 0;
    for (size_t i = 0; i < len; i++) {
        sum += arr[i];
    }
    return (double)sum / (double)len;
}

void print_student(const struct Student *s) {
    printf("Student(name=\"%s\", id=%d)\n", s->name, s->id);
}

int main(void) {
    print_header();
    print_numbers(5);

    int n = 5;
    int fact = factorial(n);
    printf("factorial(%d) = %d\n", n, fact);

    int scores[] = {80, 90, 75, 95};
    double avg = average(scores, sizeof(scores) / sizeof(scores[0]));
    printf("average score = %.2f\n", avg);

    struct Student s = {"OSLab", 25200000};
    print_student(&s);

    return 0;
}

