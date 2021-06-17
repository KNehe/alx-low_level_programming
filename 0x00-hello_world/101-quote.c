#include <unistd.h>
/**
 * main - Entry point
 * Description: Prints string to stderr.
 * Return: 1
*/
int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, word, sizeof(word) - 1);
	return (1);
}
