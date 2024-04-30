#include <stdio.h>

int main() {
   char c, next_c;
   scanf("%c", &c);
   next_c = c + 1;
   if (next_c==123) next_c=97;
   printf("%c\n",next_c);

   return 0;
}
