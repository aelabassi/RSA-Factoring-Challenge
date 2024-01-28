#ifndef FACTORS_H
#define FACTORS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>
#include <ctype.h>
#include <math.h>

#define _GNU_SOURCE

typedef unsigned long long  int bignum_;

void _factorize(char *argv[]);
int _isPrime(u_int64_t n);
void _rsa(char *argv[]);




#endif
