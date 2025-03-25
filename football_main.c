#include "football.h" // import football.h 
#include <stdio.h> // import standard library for c

int main() { // define main function to run code
    int score; // initialize score as an integer

    while (1) { // while 1...
        printf("Enter 0 or 1 to STOP\n"); // display to user that to stop, enter 1 or 0
        printf("Enter the NFL score: "); // prompt user to enter NFL score
        scanf("%d", &score); // scan input and store in integer score

        if (score == 0 || score == 1) { // if score equals 0 or score equals 1
            break; // break the function
        } // close if statement
        
        printf("Total combinations: %d\n", count_combinations(score)); // display number of combinations to get to user's points
        print_combinations(score); // display print_combinations function (every possible combinations)
    } // close while loop

    return 0; // return 0
} // close main function