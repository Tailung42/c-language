#include <stdio.h>

int main() {
    int year;
    
    printf("Leap years from 1900 to 2100:\n");
    for(year = 1900; year <= 2100; year++) {
        // If year is divisible by 4
        if(year % 4 == 0) {
            // If year is a century year
            if(year % 100 == 0) {
                // If year is divisible by 400
                if(year % 400 == 0)
                    printf("%d\n", year); // It is a leap year
            } else {
                printf("%d\n", year); // It is a leap year
            }
        }
    }
    
    return 0;
}