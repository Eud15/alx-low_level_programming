#include "holberton.h"
/**
 * main - starts the program
 *
 * Return: nothing if successful
 */
int main(void)
{
	char string[] = "Holberton";
	int ind = 0;

		while (string[ind])
			if (ind <= 9)
			{
				_putchar(string[ind]);
				ind++;
			}
		_putchar('\n');
		return (0);
}
