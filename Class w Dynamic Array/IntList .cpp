#include "IntList.h"

IntList::IntList(){
    data = new int[10];
	cap = 10;
	howmany = 0;
}
	
IntList::IntList(int capacity){
    data = new int[capacity];
	cap = capacity;
	howmany = 0;
}


IntList::IntList(const IntList&  obj){
cout << "in copy constructor " << endl;
   howmany =  obj.howmany;
   cap =   obj.cap;
   data =  new int[cap];
   for (int i = 0; i < howmany; i++)
	   data[i] = obj.data[i];

}

int IntList::lengthIs(){
    return howmany;
}


void IntList::add(int value){ 
   
	if (  isFull() ){  // array is full
         int*  temp = new int[cap * 2];

	     for (int i = 0; i < howmany; i++)
                temp[i] = data[i];

		 delete[] data;
		 data = temp;

	     cap = cap * 2;
	}

   data[howmany] = value;
   howmany++;
}


// precondition:  value is in the list
void IntList::deleteItem(int value){
   int index = 0;
   while ( index < howmany && data[index] != value)
	   index++;

   if ( index < howmany ) {    // found it 
       
	   for (int i= index+1; i <= howmany-1; i++)
		    data[i-1] = data[i];

	   howmany--;
   }


}


 bool IntList::isThere(int value){
   int index = 0;
   while ( index < howmany && data[index] != value)
	   index++;

   return (index < howmany);
}


bool IntList::isFull(){
   return (howmany == cap);
}


bool IntList::isEmpty(){
   return (howmany == 0);
}

int& IntList::operator[](int index){
	
  return data[index];	
}
	
IntList IntList::operator+(IntList obj){
    IntList temp(cap + obj.cap);
	temp.howmany = howmany + obj.howmany;
	for(int i=0; i< howmany; i++)
		temp[i] = data[i];
	  //  temp.data[i] = data[i];
	  // temp.add(data[i];

	int targetIndex = howmany;
	for(int j=0; j< obj.howmany; j++){
		temp[targetIndex] = obj.data[j];
		targetIndex++;
	}     // temp.add(obj.data[j]);

	return temp;
}

ostream& operator<<(ostream& out, const IntList& obj){
      out << "[" ;
      for (int i = 0;  i < obj.howmany; i++)
		  out << obj.data[i] << " " ;
	  out << "]";

	  return out; 
}
/*
IntList& IntList::operator=( const IntList&  obj) {
     
	if ( this != &obj ) {
	  howmany = obj.howmany;
	  cap = obj.cap;
	  delete [] data;
	  data = new int[cap];
	  for ( int i = 0; i<howmany; i++)
		  data[i] =  obj.data[i];
	}
	return *this;
}
*/

IntList::~IntList(){
   delete [] data;
}




   
