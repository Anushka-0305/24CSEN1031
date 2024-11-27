#include <stdio.h>

int main() {
  int num, digit;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  printf("Digits in reverse order: ");

  while (num > 0) {
    digit = num % 10; // Extract the last digit
    printf("%d ", digit);
    num /= 10; // Remove the last digit
  }

  printf("\n");

  return 0;
}




Enter a positive integer: 12345
Digits in reverse order: 5 4 3 2 1 
