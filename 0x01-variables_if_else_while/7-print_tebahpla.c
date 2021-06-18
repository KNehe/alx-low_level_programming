#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints lower case alphabet
 * in reverse followed by a new line
 * Return: 0
*/
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
