#include <stdio.h>
#include <math.h>

int main() {
  int num, originalNum, remainder, result = 0, n = 0;

  printf("Enter an integer: ");
  scanf("%d", &num);

  originalNum = num;

  // Count the number of digits in the number
  while (originalNum != 0) {
    originalNum /= 10;
    ++n;
  }

  originalNum = num; // Reset originalNum to the original number

  // Calculate the sum of the cubes of each digit
  while (originalNum != 0) {
    remainder = originalNum % 10;
    result += pow(remainder, n);
    originalNum /= 10;
  }

  // Check if the number is an Armstrong number
  if (result == num)
    printf("%d is an Armstrong number.\n", num);
  else
    printf("%d is not an Armstrong number.\n", num);

  return 0;
}



Enter an integer: 3
3 is an Armstrong number.
