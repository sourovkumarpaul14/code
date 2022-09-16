#include <stdio.h>
int main()
{
   int i, space, range, k = 0;

   printf("Enter the number of range: ");
   scanf("%d", &range);

   for (i = 1; i <= range; ++i, k = 0)
   {
      for (space = 1; space <= range - i; ++space)
      {
         printf("  ");
      }
      while (k != 2 * i - 1)
      {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
