#include "Professor.h"


Professor::Professor(): Person(n,lastN,id){}
Professor::Professor( std::string name, std::string nameTit,std::string grade): Person(name){ tit* = new Title(std::string nameTit, std::string grade)}

virtual ~Professor(){delete tit;}

std::string Professor::toString(){

  stringstream s;
  s<<name;
  s<<Title->toString(); 

  return s.str();
}

