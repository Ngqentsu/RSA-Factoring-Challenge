#include "main.h"

/**
 * processfile - read numbers from a file and factorize them
 * @file: the file
 */
void processfile(FILE *file)
{
int num, count, i, x = 0;
clock_t start = clock();
factors *factorization = NULL;

while (fscanf(file, "%d", &num) != EOF)
{
factors *factors = factorize(num, &count);
if (factors != NULL)
{
if ((double)(clock() - start) / CLOCKS_PER_SEC > 5.0)
{
printf("Time limit exceeded\n");
free(factors);
break;
}
x += count;
factorization = realloc(factorization, x *(sizeof(factors)));
for (i = 0; i < count; i++)
{
factorization[x - count + i] = factors[i];
}
free(factors);
}
for (i = 0; i < x; i++)
{
printf("%d=%d*%d\n", num, factorization[i].f1, factorization[i].f2);
}
}
free(factorization);
fclose(file);
}
