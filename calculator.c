#include <stdio.h>
// Here is the calculator Code:
// Please include: subtraction, multiplication, and division.
// If you are confused with the code, do not be afraid to google
// the functions, data types, the int main(void), format specifiers etc.

int main(void) {
  int x; // instead of indenting after every line, you must use ; to end the
         // line
  int y;

  printf("Type your first number: ");
  scanf("%i", &x);
  printf("\nType your second number: ");
  scanf("%i", &y);

  printf("\nThe first number is %i and the second number is %i", x, y);

  int sum = x + y;
  printf("\n\nThe sum of the numbers is %i", sum);

  int product = x * y;
  printf("\n\nThe product of the numbers is %i", product);

  int difference = x - y;
  printf("\n\nThe difference of the numbers is %i", difference);

  int quotient = x / y;
  printf("\n\nThe quotient of the numbers is %i", quotient);

  return 0;
}