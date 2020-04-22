#include "minmax.h"

int MinMax::max(int n1, int n2, int n3)
{
    int finalMax = n1;

    if (finalMax < n2) finalMax = n2;
    if (finalMax < n3) finalMax = n3;

    return finalMax;
}

int MinMax::min(int n1, int n2, int n3)
{
    int finalMin = n1;

    if (finalMin > n2) finalMin = n2;
    if (finalMin > n3) finalMin = n3;

    return finalMin;
}