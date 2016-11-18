#include <iostream>

using namespace std;

class Square;

class Rectangle {
    int width, height;

public:
    int area() {
        return (width*height);
    }

    //this is gonna be a friend function that will access some square stuff
    void convert (Square a);

};


class Square    {
    friend class Rectangle;
private:
    int side;
public:
    Square(int a) : side(a) {}
};


void Rectangle::convert(Square a) {
    width = a.side;
    height = a.side;
}


int main()  {
    Rectangle rect;
    Square sqr(7);
    rect.convert(sqr);
    cout << rect.area() << endl;
}


