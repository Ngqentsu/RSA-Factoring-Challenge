#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct factors {
    int f1;
    int f2;
} factors;

factors *factorize(int num, int *count);
void processfile(FILE *file);

#endif
