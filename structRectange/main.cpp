#include <iostream>
#include  "funcs.h"

int main(){
    double width;
    double length;
    do{
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
        }
        std::cout << "enter a positive number for the width of the rectangle" << std::endl;
        std::cin >> width;
    }while (std::cin.fail() || width <= 0);

    do{
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
        }
        std::cout << "enter a positive number for the length of the rectangle" << std::endl;
        std::cin >> length;
    }while (std::cin.fail() || width <= 0);

    std::cout << "Assigning values using a constructor" << std::endl;
    std::cout << "-------------------" << std::endl;
    Rectangle myrectangle(length, width);
    std::cout << "Width " << getWidth(myrectangle) << std::endl;
    std::cout << "Length " << getLength(myrectangle) << std::endl;
    std::cout << "Perimetr " << Perimetr(myrectangle) << std::endl;
    std::cout << "Area " << Area(myrectangle) << std::endl;
    myrectangle.isSquare();

    std::cout << "\n";

    std::cout << "Assigning values using individual functions" << std::endl;
    std::cout << "-------------------" << std::endl;
    setWidth(myrectangle, width);
    setLength(myrectangle, length);
    std::cout << "Width " << getWidth(myrectangle) << std::endl;
    std::cout << "Length " << getLength(myrectangle) << std::endl;
    std::cout << "Perimetr " << Perimetr(myrectangle) << std::endl;
    std::cout << "Area " << Area(myrectangle) << std::endl;
    myrectangle.isSquare();


}