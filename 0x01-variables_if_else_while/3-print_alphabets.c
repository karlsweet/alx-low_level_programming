#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints if number is positive, zero or negative
 *
 * Return: always (Success)
 *
 */
int main(void)
{
	char low;

	for (low= 'a'; low<= 'z'; low++)
	putchar(low);
	
	for (low = 'A'; low<= 'Z'; low++)
	putchar(low);
	putchar('\n');
	return (0);
}
