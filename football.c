#include "football.h" // import football.h 
#include <stdio.h> // import standard library

int count_combinations(int points) { // define function that counts number of combinations and returns an integer
    int td_8, td_7, td_6, fg, safety; // initialize different types of points
    int count = 0; // intitialize count as 0

    for (td_8 = 0; td_8 * 8 <= points; td_8++) { // for every td_8 multiplied by 8, increment by 1
        for (td_7 = 0; td_7 * 7 <= points; td_7++) { // for every td_7 multiplied by 8, increment by 1
            for (td_6 = 0; td_6 * 6 <= points; td_6++) { // for every td_6 multiplied by 8, increment by 1
                for (fg = 0; fg * 3 <= points; fg++) { // for every fg multiplied by 8, increment by 1
                    for (safety = 0; safety * 2 <= points; safety++) { // for every safety multiplied by 2, increment by 1
                        if ((td_8 * 8) + (td_7 * 7) + (td_6 * 6) + (fg * 3) + (safety * 2) == points) { // if the combination adds up to points...
                            count++; // increment number of combinations (count) by one
                        } // close for loop
                    } // close for loop
                } // close for loop
            } // close for loop
        } // close for loop
    } // close for loop
    return count; // return final count
} // close for loop

void print_combinations(int points) { // initialize function to display combinations
    int td_8, td_7, td_6, fg, safety; // initialize different types of points
    int found = 0; // initialize found as 0

    printf("Possible combinations of scoring plays for %d points:\n\n", points); // prompt user how many combinations to get their entered point value

    for (td_8 = 0; td_8 * 8 <= points; td_8++) { // for every td_8 multiplied by 8, increment by 1
        for (td_7 = 0; td_7 * 7 <= points; td_7++) { // for every td_7 multiplied by 8, increment by 1
            for (td_6 = 0; td_6 * 6 <= points; td_6++) { // for every td_6 multiplied by 8, increment by 1
                for (fg = 0; fg * 3 <= points; fg++) { // for every fg multiplied by 8, increment by 1
                    for (safety = 0; safety * 2 <= points; safety++) { // for every safety multiplied by 2, increment by 1
                        if ((td_8 * 8) + (td_7 * 7) + (td_6 * 6) + (fg * 3) + (safety * 2) == points) { // if the combination adds up to points...
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td_8, td_7, td_6, fg, safety); // display the current combination of points before moving to next
                            found = 1; // set found equal to 1
                        } // close for loop
                    } // close for loop
                } // close for loop
            } // close for loop
        } // close for loop
    } // close for loop

    if (!found) { // if no combinations were found
        printf("No valid combinations for %d points.\n", points); // display such to the user
    } // close if statement
} // close function