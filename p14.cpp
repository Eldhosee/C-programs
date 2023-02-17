
#include <iostream>
using namespace std;


class Shape {
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }

    
    virtual float Area() = 0;
};


class Square : public Shape {
   public:
    float Area() {
        return dimension * dimension;
    }
};


class Circle : public Shape {
   public:
    float Area() {
        return 3.14 * dimension * dimension;
    }
};

int main() {
    Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.Area() << endl;

    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.Area() << endl;

    return 0;
}