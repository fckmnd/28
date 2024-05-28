#include <iostream>

class SimpleCircle {
private:
    double itsRadius;

public:
    SimpleCircle() = default;
    SimpleCircle(double radius) : itsRadius(radius) {}
    ~SimpleCircle() = default;

    void setRadius(double radius) {
        itsRadius = radius;
    }
    double getRadius() const {
        return itsRadius;
    }
};

int main() {
    SimpleCircle circle1;
    circle1.setRadius(5.0);
    std::cout << "Circle 1 Radius: " << circle1.getRadius() << std::endl;
    SimpleCircle circle2(10.0);
    std::cout << "Circle 2 Radius: " << circle2.getRadius() << std::endl;

    return 0;
}