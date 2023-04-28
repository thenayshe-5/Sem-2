/* Samantha is an avid collector of lucky numbers. She believes that each number has 
its own unique energy and can bring good luck if used correctly. One day, she came 
across a new number that had a mysterious aura and she could not resist finding out 
more about it. She heard that the number may fall within the digit combinations, so 
she decided to sum up all the four-digit even numbers and then keep adding the 
digits of the summation until a single digit is found to unlock its secrets. Later, she 
must check again whether the single digit is odd or even. If odd, then you must say 
“Odd Found” otherwise you must return “Even found”. Write a C program to help 
her in finding the mysterious number*/

#include <stdio.h>

int main() {
	int i,j,sum;

	for (i=1000;i<9999;i+=2) {
		sum = 10;
        j = i;
		while (sum > 9) {
			sum = 0;
			while (j > 0) {
				sum += j%10;
				j = j/10;
			}
            j = sum;
		}
		if (sum%2 == 0)
		{
			printf("%d Even found.\n",i);
		}
		else
		{
			printf("%d Odd found.\n",i);
		}
	}

	return 0;
}