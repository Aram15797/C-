#include <iostream>
#pragma once

struct Rectangle{
    double length;
    double width;

    Rectangle (double Length, double Width){
        length = Length;
        width = Width;
    }
    Rectangle(){
        length = 1;
        width = 1;
    }

    void isSquare(){
        if (length == width){
            std::cout << "Rectangle is square!" << std::endl;
        }else {
            std::cout << "Rectangle is not square!" << std::endl;
        }
    }
};
void setWidth(Rectangle &rectangle, double width);
void setLength(Rectangle &rectangle, double length);
double getWidth(Rectangle rectangle);
double getLength(Rectangle rectangle);
double Perimetr(Rectangle rectangle);
double Area(Rectangle rectangle);