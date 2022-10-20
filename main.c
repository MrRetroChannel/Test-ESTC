#include "vec.h"
#include <stdio.h>

int main()
{
    Vec3d a = {1, 2, 3};
    Vec3d b = {5, 6, 2};
    printf("Dot product: %i", dotVec(a, b));
}