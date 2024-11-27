#include <stdio.h>
#include <math.h>

int isPalindromic(int num) {
  if (num < 0) {
    return 0; // Negative numbers are not palindromic
  }

  int reversed = 0;
  int original = num;

  while (num > 0) {
    int digit = num % 10;
    reversed = reversed * 10 + digit;
    num /= 10;
  }

  return original == reversed;
}

int main() {
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (isPalindromic(number)) {
    printf("%d is in a palindromic sequence.\n", number);
  } else {
    printf("%d is not in a palindromic sequence.\n", number);
  }

  return 0;
}


Enter a number: 3443
3443 is in a palindromic sequence.
