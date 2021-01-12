
#include "Truck.h"
#include "Car.h"

#include <iostream>
#include <string>
using namespace std;

int main () {

     string name;
	 int size;
	
	 Vehicle* list[15]; 

	 for (int i = 0; i<3; i++){
	    cout << "enter  manufacturer" << endl;
		cin >> name;
		cout << "enter engine size" << endl;
		cin >> size;
	    list[i] = new Truck(name,size);;
	 }

	 for (int j = 3; j<5; j++){
	    cout << "enter  manufacturer" << endl;
		cin >> name;
		cout << "enter engine size" << endl;
		cin >> size;
	    list[j] = new Car(name,size);;
	 }

	 for(int k = 0; k<5; k++)
		if (list[k]->getSize() > 50) //(*list[0]).display(cout);
         list[k]->display(cout);






}