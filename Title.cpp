#include "Title.h"

Title::Title(){}
Title::Title(std::string nom, std::string gra){
  nombre = nom;
  grade= gra;
}
std::string Title::getName(){
  return nombre;
}
void Title::setName(std::string nom){
  nombre=nom;
}

std::string Title::getGrade(){
  return grade;
}
void Title::setGrade(std::string gra){
  grade = gra;
}