
#include "Person.h"


class Professor: Person {
private: 
double monthlySalary;
double commissionRate;

public:
Professor();
Professor(double, double, string , string, int);
virtual ~Professor();