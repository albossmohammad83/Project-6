
#include "Vehicle.h"

class Truck : public Vehicle {

private:
	int bedsize;
	bool towPackage;

public:
	Truck();
    Truck(string man, bool tow);
	Truck(string man, int esize);
	Truck(string man, int esize, Person per, bool tow);
    Truck(string man, int esize, int year, int bsz, bool tow);

	void display(ostream& out) const;

	void bedsze(int size);
	int getBed();
	double regCost()const;

	int warrantYears();

	void tow(bool isTow);
	bool getTow();

};