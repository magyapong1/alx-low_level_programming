#include "main.h"

/**
  * _abs - computes the absolute value of an integer
  * @r: is a variable
  * Return: 0 always
  */
int _abs(int r)
{
	if (r < 0)
	{
		return (r * -1);
	}
	else
	{
		return (r);
	}

	return (0);
}
