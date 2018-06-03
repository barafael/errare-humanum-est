#include <stdio.h>

int main() {
   int *ptr;
   *ptr = 1;

   printf("int at pointer: %d", *ptr);
   {
       int twelve = 12;
       ptr = &twelve;
   }
   printf("%d", *ptr);
   return 0;
}