#include <stdio.h>

int main() {
  int num, reversedNum = 0, remainder;

  printf("Enter a positive integer: ");
  scanf("%d", &num);

  while (num != 0) {
    remainder = num % 10;  // Extract the last digit
    reversedNum = reversedNum * 10 + remainder;  // Build the reversed number
    num /= 10;             // Remove the last digit
  }

  printf("Reversed number: %d\n", reversedNum);

  return 0;
}



Enter a positive integer: 245
Reversed number: 542
