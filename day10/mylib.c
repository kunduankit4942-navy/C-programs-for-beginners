#include "mylib.h"

int getMax(int a, int b) {
    return (a > b) ? a : b;
}

float getAverage(int a, int b) {
    return (a + b) / 2.0;
}

float getAverageAry(int ary[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += ary[i];
    }
    return (float)sum / size;
}