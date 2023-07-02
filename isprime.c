#include "main.h"
#include <stdbool.h>

/**
 * is_prime - checks if a number is prime
 * @num: the number to check
 * Return: true if the number is prime, false otherwise
 */
bool is_prime(int num)
{
if (num <= 1)
return (false);

if (num <= 3)
return (true);

if (num % 2 == 0 || num % 3 == 0)
return (false);

for (int i = 5; i * i <= num; i += 6)
{
if (num % i == 0 || num % (i + 2) == 0)
return (false);
}
return (true);
}
