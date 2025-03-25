#include "football.h"

int main() {
    int score;

    while (1) {
        printf("Enter 0 or 1 to STOP\n");
        printf("Enter the NFL score: ");
        scanf("%d", &score);

        if (score == 0 || score == 1) {
            break;
        }
        
        printf("Total combinations: %d\n", count_combinations(score));
        print_combinations(score);
    }

    return 0;
}