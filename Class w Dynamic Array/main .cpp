
#include "IntList.h"


int main () {

	   IntList mylist(15);  
	   mylist.add(55);
	   mylist.add(54);
	   mylist.add(33);
	   mylist.add(155);
	   mylist.add(254);
	   mylist.add(333);


	   IntList mylist2; 
	   mylist2.add(15);
	   mylist2.add(25);
	   mylist2.add(33);
	
       cout << "list 1 contains " << mylist << endl;
	   cout << "list 2 contains " << mylist2 << endl;

	   mylist = mylist2;

	   cout << "after assignment list 1 contains " << mylist << endl;
	   cout << "list 2 contains " << mylist2 << endl;
	   
	   mylist.deleteItem(25);

	   cout << "after deletionlist 1 contains " << mylist << endl;
	   cout << "list 2 contains " << mylist2 << endl;
}


