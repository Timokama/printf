#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%s\n", "Best\nSchool");
	return (0);
}
void _printf(unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		_print_a_string(args);
		i++;
	}
	_write('\n');
	va_end(args);
}
