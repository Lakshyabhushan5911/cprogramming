#include<stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    
    // Use the correct format specifier for reading a character
    scanf(" %c", &ch);

    // Check if the entered character is a vowel
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character is a vowel\n");
    } else {
        printf("The character is a consonant\n");
    }

    return 0;
}