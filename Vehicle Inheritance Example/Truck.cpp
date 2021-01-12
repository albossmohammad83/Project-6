#include "Truck.h"

Truck::Truck(){
   towPackage= false; 
   bedsize = -1;
}

Truck::Truck(string man, bool istow): towPackage(istow) {
	setManu(man);
	bedsize = 500;
}

Truck::Truck(string man, int esize):Vehicle() {
	towPackage = true;
	bedsize = 250;
}


Truck::Truck(string man, int esize, Person per, bool tow): Vehicle(man,esize,per){
	towPackage = tow;
	bedsize = 500;
}


Truck::Truck(string man, int esize, int iyear, int bsz, bool tow):Vehicle(), bedsize(bsz), towPackage(tow){
   //bedsize = bsz;
   // towPackage = tow;
  
   setYear(iyear);
   setEng(esize);
   setManu(man);
   Person p("noname");
   setOwner(p);
   setCost(BASE);

}
void Truck::bedsze(int size){
	bedsize = size;
}

int Truck::getBed  (){
	return bedsize;}

void Truck::tow(bool isTow){
    towPackage = isTow;
}

bool Truck::getTow(){ 
	return towPackage;
}

double Truck::regCost() const{
	return Vehicle::regCost() + 10;
}

void Truck::display(ostream& out) const{
   Vehicle::display(out);  
   if (towPackage)
	   out << "There is a tow package. " << endl;
   else
	   out << "No tow package." << towPackage;
   out << "Bedsize: " << bedsize << endl;


}

int Truck::warrantYears() {
   if (regCost() > 4000)
	   return 2;
   else if (regCost() > 2000)
	   return 1;
  
  return 0;

}

