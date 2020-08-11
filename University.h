#include "Professor.h"


class University {

string nombre;
Professor* profe;
//std::vector<Professor*> professorList;
std::vector<Administrative*> administrativeList;

  public:

  University();
  University(string);
  University(string,Professor*const,Administrative* const);
  virtual ~University(); 

  string getNombre();
  void setNombre(string);
  Professor* getProfessor();
  void setProfessor(Professor* const);