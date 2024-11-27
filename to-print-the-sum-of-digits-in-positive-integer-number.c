#include <stdio.h>

int main() {
  int num, digit, sum = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  while (num > 0) {
    digit = num % 10;  // Extract the last digit
    sum += digit;      // Add the digit to the sum
    num /= 10;         // Remove the last digit
  }

  printf("Sum of digits: %d\n", sum);

  return 0;
}




Enter a positive integer: 45
Sum of digits: 9

