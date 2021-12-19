#include <stdio.h>

#define OUT 0
#define IN  1


int main(int argc, char const *argv[])
{
    int i, c, state;
    int wlength;
    int nwords[20];

    for (i = 0; i < 20; ++i)
        nwords[i] = 0;
    
    wlength = 0;
    state = OUT;

    while ( (c = getchar()) != EOF ) {
        if ( c == ' ' || c == '\t' || c == '\n') {
            if (state == IN) {
                ++nwords[wlength];
                wlength = 0;
            }
            state = OUT;
        }
        else {
            if (state == OUT)
                state = IN;
            ++wlength;
        }
    }
    int j;
    for (i = 0; i < 20; ++i)
        if (nwords[i] != 0) {
            printf("%3d:\t", i);
            for (j = 0; j < nwords[i]; ++j)
                putchar('#');
            putchar('\n');
        }

    return 0;
}
