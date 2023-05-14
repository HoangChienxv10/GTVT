#include <iostream>

using std::cout;
using std::endl;

class Count {
	public:
		int x; 
		
		void print(){
			cout << x << endl;
		}
};

int main(){
	Count counter;
	Count *counterPtr = &counter;
	Count &counterRef = counter;
	
	cout << "Assign 1 to x and print using the object's name: ";
	counter.x = 1;
	counter.print();
	
	cout << "Assign 2 to x and print using a reference: ";
	counterRef.x = 2;
	counterRef.print();
	
	cout << "Assign 3 to x and print using a pointer: ";
	counterPtr->x = 3;
	counterPtr->print();
	
	return 0;
}
