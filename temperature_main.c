#include "temperature.h"
#include <stdio.h>
#include <string.h>

int main() { // initialize main function
    float tempValue; // initialize tempValue as float
    char tempScale[10], tempConv[10]; // initialize tempScale and tempConv as char arrays of length 10

    printf("Enter the temperature: "); // prompt user to enter their temperature
    scanf("%f", &tempValue); // store input in tempValue

    printf("Choose the current scale (Celsius, Fahrenheit, Kelvin): "); // prompt user to enter value of entered temp
    scanf("%s", tempScale); // store input in tempScale

    printf("Convert to (Celsius, Fahrenheit, Kelvin): "); // prompt user to enter temp to convert to
    scanf("%s", tempConv); // store input in tempConv

    float convertedTemp = 0; // initialize float convertedTemp as 0

    if (strcmp(tempScale, "Fahrenheit") == 0) { // checks if the string entered is Fahrenheit (== 0 would return True)
        if (strcmp(tempConv, "Fahrenheit") == 0) { // checks if the string entered is Fahrenheit (== 0 would return True)
            printf("Error: Invalid Conversion\n"); // displays error message to user
            return 0; // return null
        } else if (strcmp(tempConv, "Celsius") == 0) { // checks if the string entered is Celsius (== 0 would return True)
            convertedTemp = fahrenheit_to_celsius(tempValue); // call function to convert fahrenheit to celsius
        } else if (strcmp(tempConv, "Kelvin") == 0) { // checks if the string entered is Kelvin (== 0 would return True)
            convertedTemp = fahrenheit_to_kelvin(tempValue); // call function to convert fahrenheit to kelvin
        }
    } else if (strcmp(tempScale, "Celsius") == 0) { // checks if the string entered is Celsius (== 0 would return True)
        if (strcmp(tempConv, "Fahrenheit") == 0) { // checks if the string entered is Fahrenheit (== 0 would return True)
            convertedTemp = celsius_to_fahrenheit(tempValue); // call function to convert celsius to fahrenheit
        } else if (strcmp(tempConv, "Kelvin") == 0) { // checks if the string entered is Kelvin (== 0 would return True)
            convertedTemp = celsius_to_kelvin(tempValue); // call function to convert celsius to kelvin
        } else if (strcmp(tempConv, "Celsius") == 0) {  // checks if the string entered is Celsius (== 0 would return True)
            printf("Error: Invalid Conversion\n"); // display error message to user
            return 0; // return null
        }
    } else if (strcmp(tempScale, "Kelvin") == 0) { // checks if the string entered is Kelvin (== 0 would return True)
        if (strcmp(tempConv, "Fahrenheit") == 0) { // checks if the string entered is Fahrenheit (== 0 would return True)
            convertedTemp = kelvin_to_fahrenheit(tempValue); // call function to convert Kelvin to Fahrenheit
        } else if (strcmp(tempConv, "Celsius") == 0) { // checks if the string entered is Celsius (== 0 would return True)
            convertedTemp = kelvin_to_celsius(tempValue); // call function to convert kelvin to celsius
        } else if (strcmp(tempConv, "Kelvin") == 0) { // checks if the string entered is Kelvin (== 0 would return True)
            printf("Error: Invalid Conversion\n"); // display that the conversion is invalid
            return 0; // return null
        } // close else if statement
    } else { // else...
        printf("Error: Invalid Scale Entered\n"); // display the error to user
        return 0; // return null
    } // close else

    printf("\nConverted temperature: %.2f\n", convertedTemp); // display the user's converted temperature

    float celsius; // initialize celsius as float
    if (strcmp(tempScale, "Fahrenheit") == 0) {
        celsius = fahrenheit_to_celsius(tempValue); // set celsius equal to the tempValue converted to celsius
    } else if (strcmp(tempScale, "Kelvin") == 0) { // checks if the string entered is Kelvin (== 0 would return True)
        celsius = kelvin_to_celsius(tempValue); // set celsius equal to the entered temperature converted to celsius
    } else { // else...
        celsius = tempValue; // set celsius equal to the tempValue
    } // close else statement

    printf("%s\n", categorize_temperature(celsius)); // print the temperature's category and weather advisory

    return 0; // return null
} // close main function
