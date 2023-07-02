#include <stdbool.h>

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
bool is_prime(int num);
void process_file(FILE *file);

#endif
