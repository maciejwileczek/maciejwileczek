#include <stdio.h>

int main() {
    int c, old_c = '\0';
    old_c = '\0';

    while ((c = getchar()) != EOF) {
        if ((old_c == c) && (c == ' ')) {
            ;
        }
        else {
            putchar(c);
        }
        old_c = c;
    }
}