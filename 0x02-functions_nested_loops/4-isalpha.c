#include "main.h"

/**
  * _isalpha - checks for alphabets and returns
  * 1 when true and 0 otherwise
  * @c: is a variable to be used
  * Return: 1 when condition is true
  */
int _isalpha(int c)
{
	return (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z');
}
