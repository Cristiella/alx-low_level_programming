#include <stdio.h>
/**
 * main - prints alphabet in lower case except q and e
 *
 * Return: 0 on success
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		putchar('\n');
		return (0);
}
