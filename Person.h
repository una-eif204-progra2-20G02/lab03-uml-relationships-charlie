


#include <string>
#include <ostream>
#include <sstream>


class Person {
private:
string name;



public:
Person();
Person(string name);
virtual~Person();    
string getFirstName();
void setFirstName(string);