#include <stdio.h>
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 = 5, num2 = 10;
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}