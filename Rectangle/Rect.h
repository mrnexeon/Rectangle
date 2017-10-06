#pragma once

#include "Vector.h"

class Rect {
public:
    Rect();
    Rect(Vector a, Vector b);
    Rect(float x1, float y1, float x2, float y2);

    void Move(Vector displacement); // Переместить 
    void Resize(float increment); // Изменить размер
    Rect MinRect(Rect other);
    
    Vector getMin() const;
    Vector getMax() const;

private:
    Vector a;
    Vector b;
};
