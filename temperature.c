#include "temperature.h"

float celsius_to_fahrenheit(float celsius) { // initialize function to convert celsius to fahrenheit
    return (9.0 / 5) * celsius + 32; // return value in fahrenheit
} // close function

float fahrenheit_to_celsius(float fahrenheit) { // initialize function to convert fahrenheit to celsius
    return (5.0 / 9) * (fahrenheit - 32); // return value in celsius
} // closer function

float celsius_to_kelvin(float celsius) { // initialize function to convert celsius to kelvin
    return celsius + 273.15; // return value in kelvin
} // close function

float kelvin_to_celsius(float kelvin) { // initialize function to convert kelvin to celsius
    return kelvin - 273.15; // return value in celsius
} // close function

float kelvin_to_fahrenheit(float kelvin) { // initialize function to convert kelvin to fahrenheit
    return 1.8 * (kelvin - 273.15) + 32; // return value in fahrenheit
} // close function

float fahrenheit_to_kelvin(float fahrenheit) { // initialize function to convert fahrenheit to kelvin
    return (fahrenheit - 32) / 1.8 + 273.15; // return value in kelvin
} // close fucntion

const char* categorize_temperature(float celsius) { // initialize function to return string depending on degrees in celsius
    if (celsius < 0) { // if celsius is below zero
        return "Temperature category: Freezing\nWeather advisory: Stay Indoors"; // display category and advisory
    } else if (celsius < 10) { // else if celsius is less than 10...
        return "Temperature category: Cold\nWeather advisory: Wear a Coat"; // display category and advisory
    } else if (celsius < 25) { // else if celsius is less than 25...
        return "Temperature category: Comfortable\nWeather advisory: Go Outside"; // display category and advisory
    } else if (celsius < 35) { // else if celsius is less than 35...
        return "Temperature category: Hot\nWeather advisory: Drink Plenty of Water"; // display category and advisory
    } else { // else...
        return "Temperature category: Extreme Heat\nWeather advisory: Stay Indoors"; // display category and advisory
    } // close else statement
} // close function