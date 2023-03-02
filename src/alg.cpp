// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double b = value;
    if (n == 0) {
        return 1;
    }
    for (int i = 0; i < n - 1; i++) {
        value = value * b;
    }
    return value ;
}

uint64_t fact(uint16_t n) {
    uint64_t itog = 1;
    for (int i = 1; i <= n; i++) {
        itog = itog * i;
    }
    return itog;
}

double calcItem(double x, uint16_t n) {
    return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
    double itog = 0;
    for (int i = 0; i <= count; i++) {
        itog += calcItem(x, i);
    }
    return itog;
}

double sinn(double x, uint16_t count) {
    double itog = 0;
    for (int i = 1; i <= count; i++) {
        itog += ((pown(-1, i - 1) * pown(x, 2 * i - 1)) / fact(2 * i - 1));
    }
    return itog;
}

double cosn(double x, uint16_t count) {
    double itog = 0;
    for (int i = 1; i <= count; i++) {
        itog += ((pown(-1, i - 1) * pown(x, 2 * i - 2)) / fact(2 * i - 2));
    }
    return itog;
}
