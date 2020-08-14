#include "University.h"

University();
  University::University(std::string nom,Professor*const pro){
    nombre = nom;
    profe = pro;
  }
  University::~University(){}

  std::string University::getNombre(){
    return nombre;
  }
  void University::setNombre(std::string nom){
    nombre = nom;
  }
  Professor* University::getProfessor(){
    return profe;
  }
  void University::setProfessor(Professor* const pro){
    profe = pro;
  }