#include <stdio.h>
int main()
{
   char s[] = "Programming is fun";
   int i;

   for (i = 0; s[i] != '\0'; i++);
   printf("length of string is: %d", i);
   return 0;
}
