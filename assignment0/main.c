/* CS 254 Program 0
\Author: Sean May
\Date
\Compute N factorial for N=1 to 50.
*/
#include <stdio.h>

int factorial(const int number) {
    // calculates factorial of a number
    int result = 1;
    for (int i = number; i > 0; i--) {
        result *= i;
    }
    return result;
}

int main(void) {
    printf("N       N!\n");
    printf("----+-----\n");
    for (int i = 0; i <= 50; i++) {
        printf("%d       %d\n", i, factorial(i));
    }
    return 0;
}
