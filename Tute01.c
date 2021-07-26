/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int no1, no2;
  int total;
  int average;

  printf("Enter first number : ");
  scanf("%d", &no1);

  printf("Enter second number : ");
  scanf("%d", &no2);

  total = no1 + no2;
  average = total / 2;

  printf("Total is %d/n", total);
  printf("Average is %d/n", average);
  return 0;
}

