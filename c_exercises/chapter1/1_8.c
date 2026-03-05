#include <stdio.h>

int main() {
    
    long blanks, tabs, newlines;
    blanks = tabs = newlines = 0;
    
    int c;
    
    while((c = getchar()) != EOF) {
        if (c == ' ') {
            ++blanks;
        }
        else if (c == '\t') {
            ++tabs;
        }
        else if (c == '\n') {
            ++newlines;
        }
    }
    
    printf("Blanks: %ld Tabs: %ld Newlines: %ld\n", blanks, tabs, newlines);

}