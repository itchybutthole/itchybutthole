#ifndef VEC2D
#define VEC2D

class Vec2D
{
public:
    Vec2D();
    Vec2D(double, double);
    ~Vec2D();
    struct axis
    {
        double x;
        double y;
    };
    axis exist;
};

#endif //VEC2D_H
