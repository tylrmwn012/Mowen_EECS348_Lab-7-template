#ifndef __REPORT_H__
#define __REPORT_H__

/* Add any function signatures you need here but do not modify the existing ones */

/**
 * @brief Convert temperature in Celsius to Fahrenheit
 * 
 * @param celsius
 * @return float
 */
float celsius_to_fahrenheit(float celsius);

/**
 * @brief Convert temperature in Fahrenheit to Celsius
 * 
 * @param fahrenheit
 * @return float
 */
float fahrenheit_to_celsius(float fahrenheit);

/**
 * @brief Convert temperature in Celsius to Kelvin
 * 
 * @param celsius
 * @return float
 */
float celsius_to_kelvin(float celsius);

/**
 * @brief Convert temperature in Kelvin to Celsius
 * 
 * @param celsius
 * @return float
 */
float kelvin_to_celsius(float celsius);

/**
 * @brief Convert temperature in Kelvin to Fahrenheit
 * 
 * @param kelvin
 * @return float
 */
float kelvin_to_fahrenheit(float kelvin);

/**
 * @brief Convert temperature in Fahrenheit to Kelvin
 * 
 * @param fahrenheit
 * @return float
 */
float fahrenheit_to_kelvin(float fahrenheit);

/**
 * @brief Return temperature category and advisory
 * 
 * @param celsius
 * @return float
 */
const char* categorize_temperature(float celsius);

#endif /* __REPORT_H__ */
