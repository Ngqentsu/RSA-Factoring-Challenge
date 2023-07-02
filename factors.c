#include "main.h"
#include <math.h>

/**
 * *factorize - calculates the factor pairs of the number
 * @num: the number
 * @count: pointer to an integer that store total count of factor pairs
 * Return: the factor pairs of the number
 */
factors *factorize(int num, int *count)
{
factors *pairs = NULL, *tmp;
int i, cap = 0;
*count = 0;

for (i = 2; i <= sqrt(num); i++)
{
if (num % i == 0)
{
if (*count == cap)
{
cap = (cap == 0) ? 1 : cap * 2;
tmp = realloc(pairs, cap *sizeof(factors));
if (tmp == NULL)
{
free(pairs);
return (NULL);
}
pairs = tmp;
}
pairs[*count].f1 = i;
pairs[*count].f2 = num / i;
(*count)++;
}
}
return (pairs);
}
