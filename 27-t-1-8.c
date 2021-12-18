#include <stdio.h>

int main(int argc, char const *argv[])
{
    int spaces, tabs, nl;
    int c;

    spaces = 0;
    tabs = 0;
    nl = 0;

    while ( (c = getchar()) != EOF )
    {
        if (c == ' ')
            spaces++;
        if (c == '\t')
            tabs++;
        if (c == '\n')
            nl++;
    }
    printf("count:\n");
    printf("\tspaces: %d\n", spaces);
    printf("\ttabs: %d\n", tabs);
    printf("\tnew lines: %d\n", nl);
    return 0;
}
