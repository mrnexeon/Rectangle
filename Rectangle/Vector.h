#pragma once

struct Vector {
    Vector() 
        : x(0.f)
        , y(0.f)
    {

    }

    Vector(float x, float y) 
        : x(x)
        , y(y) 
    {

    }

    float x;
    float y;
};