#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("  F  |    C\n");
    printf("--------------\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf(" %3.0f | %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("--------------\n");
    return 0;
}
