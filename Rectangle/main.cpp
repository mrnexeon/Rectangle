#include <iostream>
#include "Rect.h"

int main() {

    Rect r1(0, 0, 1, 2);
    
    Rect r2(1, 1, 2, 3);
    
    Rect r3 = r2.MinRect(r1);
    
    std::cout << r3.getMin().x << " "
            << r3.getMin().y << " "
            << r3.getMax().x << " "
            << r3.getMax().y << std::endl;

    return 0;
}
