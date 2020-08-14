#include "Professor.h"
 

class University {

std::string nombre;
Professor* profe;
//std::vector<Professor*> professorList;
  public:
  University();
  University(string,Professor*const);
  virtual ~University(); 

  string getNombre();
  void setNombre(string);
  Professor* getProfessor();
  void setProfessor(Professor* const);
  //void addProfessor(Professor* pro);
  //vector<Professor*> getProfessorList();