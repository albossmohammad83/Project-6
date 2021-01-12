
#include "Truck.h"
#include "Car.h"

int main() {

       // create simple inventory
   Person per1("Joe");
   
   Truck t1("Ford", 500, 1999, 5, true);
   
   Car c3("Mazda", 4);


   t1.setCost(3000);
   c3.setCost(4001);

       // output info testing pure virtual function
   cout << "Inventory" << endl;
   cout << "Cost of the truck " << t1.regCost() <<endl;
   cout << "Sales price " << t1.totalCost()<<endl;
   cout << "warranty " << t1.warrantYears()  << endl;

   cout << "\nCost of the car " << c3.regCost() <<endl;
   cout << "Sales price " << c3.totalCost()<<endl;
   cout<< "warranty " << c3.warrantYears() << endl;
  
 
   t1.display(cout);   // will use display that is redefined by truck class
   cout << endl;

   c3.display(cout);   // will use display from Vehicle
   cout << endl;
  

}  
	 




