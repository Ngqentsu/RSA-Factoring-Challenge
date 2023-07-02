#include "main.h"

/**
 * processfile - read numbers from a file and factorize them
 * @file: the file
 */
void process_file(FILE *file)
{
int num;

if (fscanf(file, "%d", &num) == 1)
{
if (is_prime(num))
{
printf("%d is a prime number\n", num);
}
else
{
printf("%d is not a prime number\n", num);
}
}

fclose(file);
}
