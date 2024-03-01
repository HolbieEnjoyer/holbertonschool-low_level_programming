#include <stdio.h>
#include <stdlib.h>
#include "time.h"


int seed = -1;
time_t t;
int rand_char() {
    if (seed < 0)
        seed = (int) time(&t);
    srand(seed);
    seed++;
    return 33 + rand() % (126-33);
}

int main() {
    
    int sum = 0;
    while (1) {
        int ch = rand_char();
        sum += ch;
        if (sum > 2600) {
	    putchar(ch);
	    int leftover;

	    leftover = 2772 - sum;
	    putchar(leftover / 2);
            putchar(leftover - leftover / 2);
            break;
        }
        putchar(ch);
    }
    
    return 0;
}
