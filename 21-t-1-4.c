#include <stdio.h>

int main(int argc, char const *argv[])
{
    float fahr, celsius;
    int lower, upper, step;

    lower = -30;
    upper = 40;
    step = 5;

    printf("  C  |    F\n");
    printf("--------------\n");
    celsius = lower;
    while (celsius <= upper)
    {
        fahr = (9.0/5.0) * celsius + 32;
        printf(" %3.0f | %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    printf("--------------\n");
    return 0;
}
