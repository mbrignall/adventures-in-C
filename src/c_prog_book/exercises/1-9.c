/* Copy input to output replacing more than one */
/* blank with a single blank                    */

#include <stdio.h>

#define NONBLANK '-'

int main(void) {
    int c, lastc;

    lastc = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (lastc != ' ')
                putchar(c);
        } else
            putchar(c);
        lastc = c;
    }
    return 0;
}
