#include <stdio.h>

int main(int argc, char const *argv[])
{
    int c;
    int nsymbols[256];

    int i;
    for (i = 0; i < 256; ++i)
        nsymbols[i] = 0;
    
    while ( (c = getchar()) != EOF )
        ++nsymbols[c];

    int j;
    for (i = 0; i < 256; ++i)
        if (nsymbols[i] != 0)
            if (i >= ' ' && i <= '~') {
                putchar(i);
                printf(":\t");
                for (j = 0; j < nsymbols[i]; ++j)
                    putchar('#');
                putchar('\n');
            }

    return 0;
}
