#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints the alphabet in
 * lowercase followed by a new line
 * Return: 0
*/
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
