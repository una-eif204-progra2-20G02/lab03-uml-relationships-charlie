

#include "Person.h"
using namespace std;

Person::Person(){
  name= "";
  
}
Person::Person(string n){
  name=n;
 
}
Person::~Person(){

}

string Person::getFirstName(){
return name;

}
void Person::setFirstName(string nom){
name=nom;

}

string Person::toString()const{
stringstream s;

s<<"Nombre: "<<name<<"\n";

return s.str();

}