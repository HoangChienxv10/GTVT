#include <iostream>

using std::cout;
using std::endl;

#include "time1.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Time t ;
	
	cout << "The initial universal time is ";
	t.printUniversal();
	
	cout << "\nThe initial standard time is ";
	t.printStandard();
	
	t.setTime(13, 27, 6);
	
	cout << "\n\nUniversal time after setTime is ";
	t.printUniversal();
	
	cout << "\nStandard time after sedtTime is ";
	t.printStandard();
	
	t.setTime(99,99,99);
	
	cout << "\n\nAfter attemting invalid setting: "
		<< "\nUniversal time: ";
	t.printUniversal();
	cout << "\nStandard time: ";
	t.printStandard();
	cout << endl;
	
	return 0;
	return 0;
}
