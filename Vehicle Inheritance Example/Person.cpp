#include "Person.h"


Person:: Person () {
   name = "noname";
}
Person::Person(const string& nm) {
	name = nm;
}

void Person::setName(const string& nm) {
	name = nm;
}

string Person::getName() {
         return name;
}

ostream& operator<<(ostream& out, const Person& per){
   out << per.name;
   return out;
}