#include "Rect.h"

Rect::Rect() {
    
}

Rect::Rect(Vector a, Vector b) 
    : a(a)
    , b(b) 
{

}

Rect::Rect(float x1, float y1, float x2, float y2) {
    a.x = x1;
    a.y = y1;
    b.x = x2;
    b.y = y2;
}

void Rect::Move(Vector displacement) {
    a.x += displacement.x;
    a.y += displacement.y;

    b.x += displacement.x;
    b.y += displacement.y;
}

void Rect::Resize(float increment) {
    b.x += increment;
    b.y += increment;
}

Vector Rect::getMin() const {
    return a;
}

Vector Rect::getMax() const {
    return b;
}

Rect Rect::MinRect(Rect other) {
    Rect temp;

    if (this->a.x < other.a.x && this->a.y < other.a.y) {
        temp.a = this->a;
    } else {
        temp.a = other.a;
    }
    
    if (this->b.x > other.b.x && this->b.y > other.b.y) {
        temp.b = this->b;
    } else {
        temp.b = other.b;
    }
    
    return temp;
}
