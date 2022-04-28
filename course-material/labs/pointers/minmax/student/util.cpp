#include "util.h"

void swap(int* p, int* q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int* min(int* p, int* q, int* r)
{
    int a = *p, b = *q, c = *r;

    if (a <= b && a <= c)
    {
        return p;
    }
    else if (b <= a && b <= c)
    {
        return q;
    }
    else
    {
        return r;
    }
}

int* max(int* p, int* q, int* r)
{
    int a = *p, b = *q, c = *r;

    if (a >= b && a >= c)
    {
        return p;
    }
    else if (b >= a && b >= c)
    {
        return q;
    }
    else
    {
        return r;
    }
}

void minmax(int* x, int* y, int* z, int** minp, int** maxp) {
    *minp = min(x, y, z);
    *maxp = max(x, y, z);
}

void swap_min_and_max(int* x, int* y, int* z) {
    int* minp = min(x, y, z);
    int* maxp = max(x, y, z);
    swap(minp, maxp);
}