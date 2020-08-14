

#include "Person.h"


Person::Person(){
  name= "";
  
}
Person::Person(std::string n){
  name=n;
 
}
Person::~Person(){

}

std::string Person::getFirstName(){
return name;

}
void Person::setFirstName(string nom){
name=nom;

}

