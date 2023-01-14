#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
char* to_roman(int num);

int main(void)
{
    // Read the input number from the user
    int num;
    printf("Enter a number from 0 to 1000: ");
    scanf("%d", &num);

    // Convert the number to a Roman numeral and print the result
    char* roman = to_roman(num);
    printf("Roman numeral: %s\n", roman);

    // Free the memory allocated by the to_roman function
    free(roman);

    return 0;
}

// Function to convert an integer to a Roman numeral string
char* to_roman(int num)
{
    // Define a string array containing the Roman numerals
    char* roman_numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    // Define an integer array containing the corresponding integer values
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    // Allocate memory for the Roman numeral string
    char* roman = malloc(16 * sizeof(char));
    roman[0] = '\0';

    // Iterate through the values and numerals arrays
    for (int i = 0; i < 13; i++) {
        // While the input number is greater than or equal to the current value
        while (num >= values[i]) {
            // Add the corresponding Roman numeral to the output string
            strcat(roman, roman_numerals[i]);
            // Subtract the value from the input number
            num -= values[i];
        }
    }

    // Return the Roman numeral string
    return roman;
}
