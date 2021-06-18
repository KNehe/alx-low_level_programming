#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints the alphabet in
 * lowercase except q and e
 * followed by a new line
 * Return: 0
*/
int main(void)
{
	char alpha;
	char q;
	char e;

	alpha = 'a';
	q = 'q';
	e = 'e';
	while (alpha <= 'z')
	{
		if (alpha != q && alpha != e)
		{
			putchar(alpha);
		}
		alpha++;
	}
	putchar('\n');
	return (0);
}
