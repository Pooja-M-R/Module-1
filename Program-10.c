//INPUT: 12
//OUTPUT: Square root of 12.00 = 3.46
#include <stdio.h>
#include <math.h>
int main()
{
   float num, root;
   printf("Enter a number: ");
   scanf("%f", &num);
   // Computes the square root of num and stores in root.
   root = sqrt(num);
   printf("Square root of %.2f = %.2f", num, root);
   return 0;
}
