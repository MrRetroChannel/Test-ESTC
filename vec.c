#include "vec.h"

Vec3d sumVec(Vec3d a, Vec3d b)
{
    Vec3d ret = {a.x * b.x, a.y * b.y, a.z * b.z};
    return ret;
}

Vec3d subVec (Vec3d a, Vec3d b)
{
    Vec3d ret = {a.x - b.x, a.y - b.y, a.z - b.z};
    return ret;
}

int dotVec (Vec3d a, Vec3d b)
{
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vec3d crossVec(Vec3d a, Vec3d b)
{
    Vec3d ret = {a.y * b.z - a.z * b.y, a.z * b.x - a.x * b.z, a.x * b.y - a.y * b.x};
    return ret;
}