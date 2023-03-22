#include<iostream>
#include "cutlery.h"
using namespace std;





int main() {
	srand(time(NULL));

	cutlery c1; 
	cutlery c2;
	cutlery c3;


	c1.printInfo();
	c2.printInfo();
	c3.printInfo();

	cout << endl;
	c1.use();
	c2.use();
	c3.use();
	
	cout << endl;
	c1.wash();
	c2.wash();
	c3.wash();
}
