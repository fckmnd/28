/*
�������� 1

#include <iostream>

class Rectangle {
protected:
    int width, height;

public:
    Rectangle(int width, int height) : width(width), height(height) {}

    virtual Rectangle* clone() const {
        return new Rectangle(*this);
    }

    virtual void display() const {
        std::cout << "Rectangle: " << width << "x" << height << std::endl;
    }
};

class Square : public Rectangle {
public:
    Square(int side) : Rectangle(side, side) {}

    virtual Square* clone() const override {
        return new Square(*this);
    }

    virtual void display() const override {
        std::cout << "Square: " << width << "x" << height << std::endl;
    }
};

int main() {
    Square square(5);
    Square* squareCopy = square.clone();
    square.display();
    squareCopy->display();

    delete squareCopy;

    return 0;
}





�������� 2 

� ���� Shape ���� ����������� ������������-������������, ������� ������ ����������, ��� ���������� �� ����� Rectangle
void SomeFunction(const Shape&);

�������� 3
������������ �� ������ ���� �����������, ���� �� � ����� ���� �����
*/ 
