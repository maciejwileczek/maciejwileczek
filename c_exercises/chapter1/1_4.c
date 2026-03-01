#include <stdio.h>

main() {
    float fahr, celc; /* F = (C*9/5)+32  */
    int lower, upper, step;

    lower = -20;
    upper = 100;
    step = 10;

    celc = lower;

    printf("%7s\t%10s\n", "Celcius", "Fahrenheit");
    while (celc <= upper) {
        fahr = (celc*9/5) + 32;
        printf("%7.0f\t%10.1f\n", celc, fahr);
        celc = celc + step;
    }


}