#include <stdio.h>

int main()
{
   int c, val;
   val = ((c = getchar()) != EOF);
   printf("%d\n", val);
   return 0;
}
