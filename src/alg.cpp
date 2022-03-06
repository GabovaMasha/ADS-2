// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
double res;
int i;
res = 1.0;
for (i = 1; i <= n; i++) {
res = res*value;
}
return(res);
}

uint64_t fact(uint16_t n) {
if (n < 0)
return 0;
if (n == 0)
return 1;
else
return n * fact(n - 1);
}

double calcItem(double x, uint16_t n) {
return pown(x, n)/fact(n);
}

double expn(double x, uint16_t count) {
double e = 0;
for (int i = 0; i <= count; i++){
e += calcItem(x, i);
}
return e;
}

double sinn(double x, uint16_t count) {
double si = 0;
for (int i = 1; i<= count; i++) {
si += pown(-1, i-1)*calcItem(x, 2*i-1);
}
return si;
}

double cosn(double x, uint16_t count) {
double co = 0;
for (int i = 1; i <= count; i++) {
co += pown(-1, i-1)*calcItem(x, 2*i-2);
}
return co;
}
