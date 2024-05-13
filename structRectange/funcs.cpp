#include <iostream>
#include "funcs.h"


void setWidth(Rectangle &rectangle, double width){
    rectangle.width = width;
}
void setLength(Rectangle &rectangle, double length){
    rectangle.length = length;
}
double getWidth(Rectangle rectangle){
    return rectangle.width;
}
double getLength(Rectangle rectangle){
    return rectangle.length;
}
double Perimetr(Rectangle rectangle) {
    return rectangle.length + rectangle.width;
}
double Area(Rectangle rectangle) {
    return rectangle.length * rectangle.width;
}