#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside swapByValue function: a = %d, b = %d\n", a, b);
}
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swapByReference function: a = %d, b = %d\n", *a, *b);
}
int main() {
    int num1 = 5, num2 = 10;
    printf("Before swapByValue function: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapByValue function: num1 = %d, num2 = %d\n", num1, num2);
    printf("\nBefore swapByReference function: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapByReference function: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}