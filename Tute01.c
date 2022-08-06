/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1, mark2;
	float avg;
	
	printf("Enter mark : ");
	scanf("%d", &mark1);
	
	printf("Enter mark : ");
	scanf("%d", &mark2);

	printf("The average is %.2f", ((mark1 + mark2) / 2.0));

  return 0;
}

