// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include <stdio.h>
#include <limits.h>

int sum_of_two_numbers(int a, int b) {
    
    if (a > 0 && b > 0 && a >= INT_MAX - b) {
        return INT_MAX; 
    }
    
    if (a < 0 && b < 0 && a <= INT_MIN - b) {
        return INT_MIN; 
    }
    return 0; 
}

int main() {
    int a;
    int b;
    printf("Enter a number(a b)");
    scanf("%d %d", &a, &b);
    int result = sum_of_two_numbers(a, b);

    if (result == INT_MAX) {
        printf("a + b >= INTMAX. Result: INT_MAX\n");
    } else if (result == INT_MIN) {
        printf("a + b <= INT_MIN. Result: INT_MIN\n");
    } else {
        printf("0: %d\n", result);
    }


}
