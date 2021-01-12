// Used to store Vehicle info for Johnny's Car Consignment
// owner leaves car w/ Johnny, Johnny sells it for 10% more than owner wants

#include <string>
using namespace std;
#include "Person.h"

#ifndef VH
#define VH

const int BASE = 500;   // minimal vehicle owner price

class Vehicle{

public:
	 Vehicle();
	 Vehicle(const string& manu, int esize, const Person& owns);

     void setManu(string manu);
	 void setEng(int esize);
	 void setOwner(const Person& owns);
	 void setYear(int ayear);
	 void setCost(double ownercost);

	 string getManu() const;
     int getSize() const;
	 Person getOwner() const;
	 int getYear() const;
	 virtual double regCost() const;       // returnspurchase price that owner want
	 double totalCost() const;     // returns price Johnny will sell car for
	 
	 void display(ostream& out) const; // output vehicle details

	 virtual int warrantYears()=0;
	
private: 
	  // car details
	string manufacturer;
	int engine;
	Person owner;
	int year;
	double desiredPrice;  //price owner wants for car
}; 
#endif





