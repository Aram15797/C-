//funcs.h
#include <iostream>
#pragma once

struct Student{
    std::string name;
    int grade;
    int id;

    Student () {
        name = "default";
        grade = 0;
        id = 0;
    }

    Student (std::string Name, int Grade, int Id){
        name = Name;
        grade = Grade;
        id = Id;
    }

    void displayInfo(){
        std::cout << "Student name: " << name << std::endl;
        std::cout << "Student grade: " << grade << std::endl;
        std::cout << "Student id: " << id << std::endl;
    }
};

void setName(Student &student, std::string Name);
void setGrade(Student &student, int Grade);
void setId(Student &student, int Id);
std::string getName(Student student);
int getGrade(Student student);
int getId(Student student);