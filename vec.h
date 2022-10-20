typedef struct 
{
    int x;
    int y;
    int z;
} Vec3d;

Vec3d sumVec(Vec3d a, Vec3d b);

Vec3d subVec (Vec3d a, Vec3d b);

int dotVec (Vec3d a, Vec3d b);

Vec3d crossVec(Vec3d a, Vec3d b);