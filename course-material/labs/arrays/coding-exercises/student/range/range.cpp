#include "range.h"


int* range(int from, int to)
{
    int size = to - from + 1;
    int* ns = new int[size];
    for (int i = 0; i < size; i++) {
        ns[i] = from + i;
    }
    return ns;
}
