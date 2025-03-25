#include "football.h"
#include <stdio.h>

int count_combinations(int points) {
    int td_8, td_7, td_6, fg, safety;
    int count = 0;

    for (td_8 = 0; td_8 * 8 <= points; td_8++) {
        for (td_7 = 0; td_7 * 7 <= points; td_7++) {
            for (td_6 = 0; td_6 * 6 <= points; td_6++) {
                for (fg = 0; fg * 3 <= points; fg++) {
                    for (safety = 0; safety * 2 <= points; safety++) {
                        if ((td_8 * 8) + (td_7 * 7) + (td_6 * 6) + (fg * 3) + (safety * 2) == points) {
                            count++;
                        }
                    }
                }
            }
        }
    }
    return count;
}

void print_combinations(int points) {
    int td_8, td_7, td_6, fg, safety;
    int found = 0;

    printf("Possible combinations of scoring plays for %d points:\n\n", points);

    for (td_8 = 0; td_8 * 8 <= points; td_8++) {
        for (td_7 = 0; td_7 * 7 <= points; td_7++) {
            for (td_6 = 0; td_6 * 6 <= points; td_6++) {
                for (fg = 0; fg * 3 <= points; fg++) {
                    for (safety = 0; safety * 2 <= points; safety++) {
                        if ((td_8 * 8) + (td_7 * 7) + (td_6 * 6) + (fg * 3) + (safety * 2) == points) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n", td_8, td_7, td_6, fg, safety);
                            found = 1;
                        }
                    }
                }
            }
        }
    }

    if (!found) {
        printf("No valid combinations for %d points.\n", points);
    }
}