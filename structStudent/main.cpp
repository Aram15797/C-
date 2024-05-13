//main.cpp
#include <iostream>
#include  "funcs.h"

int main(){

    std::string name;
    int grade;
    int id;

    do{
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
        }
        std::cout << "enter a student name" << std::endl;
        std::cin >> name;

    }while (std::cin.fail());

    do{
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
        }
        std::cout << "enter a student id" << std::endl;
        std::cin >> id;
    }while (std::cin.fail());

    do{
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore();
        }
        std::cout << "enter a student grade" << std::endl;
        std::cin >> grade;
    }while (std::cin.fail() || grade < 0 || grade > 100);

    std::cout << "Assigning values using a constructor" << std::endl;
    std::cout << "-------------------" << std::endl;
    Student student(name, grade, id);
    student.displayInfo();

    std::cout << "\n";

    std::cout << "Assigning values using individual functions" << std::endl;
    std::cout << "-------------------" << std::endl;

    setName(student, name);
    setGrade(student, grade);
    setId(student, id);
    std::cout << "Student name: " << getName(student) << std::endl;
    std::cout << "Student id: " << getId(student) << std::endl;
    std::cout << "Student grade: " << getGrade(student) << std::endl;

}