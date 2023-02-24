#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
    char c;

    c = 'A';
    if (c >= 'A' && c <= 'Z')
    {
	    printf("%c: %d\n", c, _isupper(c));
    }
    else
    {
    printf("%c: %d\n", c, _isupper(c));
    }
    return (0);
}
