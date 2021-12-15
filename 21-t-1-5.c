#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr;

    printf("  F  |    C\n");
    printf("--------------\n");
    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf(" %3.0f | %6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
    printf("--------------\n");
    return 0;
}
