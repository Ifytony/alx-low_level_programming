#include "main.h"

/**
 * clear_bit - sets bit to zero at index index
 * @b: input integer
 * @index: returns the value of a bit at a given index
 * Return: 1 for ssucess -1 for failure
*/

int clear_bit(unsigned long int *b, unsigned int index)
{
if (index > 63)
return (-1);

*b = (~(1UL << index) & *b);
return (1);
}
