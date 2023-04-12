#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @a: first number
 * @b: second number
 *
 * Return: number of bits to change
*/

unsigned int flip_bits(unsigned long int a, unsigned long int b)
{
unsigned long int i = a ^ b;
int flip = 0;

while (i)
{
if (1 & i)
flip++;
i = i >> 1;
}

return (flip);
}
