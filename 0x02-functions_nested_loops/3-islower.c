#include "main.h"

/**
  * _islower - checks for lowercase and return 1
  * and 0 otherwise
  * @c: is a variable for the program
  * Return: 1 when condition is true
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
