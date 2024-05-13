//funcs.cpp
#include <iostream>
#include "funcs.h"


void setName(Student &student, std::string Name){
    student.name = Name;
}
void setGrade(Student &student, int Grade){
    student.grade = Grade;
}
void setId(Student &student, int Id){
    student.id = Id;
}
std::string getName(Student student){
    return student.name;
}
int getGrade(Student student){
    return student.grade;
}
int getId(Student student){
    return student.id;
}
