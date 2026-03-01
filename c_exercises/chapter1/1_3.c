#include <stdio.h>

main() {
    float fahr, celc;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("%10s\t%7s\n", "Fahrenheit", "Celcius");
    while (fahr <= upper) {
        celc = (5.0/9.0)*(fahr-32.0);
        printf("%10.0f\t%7.1f\n", fahr, celc);
        fahr = fahr + step;
    }
}