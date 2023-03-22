#include "cutlery.h"
#include<iostream>
using namespace std;

cutlery::cutlery() {
	isClean = true;
	type = rand() % 3;
}

void cutlery::printInfo() {
	if (type == 0) {
		cout << "You have a fork!" << endl;
		if (isClean == true)
			cout << "It is clean" << endl;
		else
			cout << "It is dirty" << endl;
	}
	else if (type == 1) {
		cout << "You have a spoon!" << endl;
		if (isClean == true)
			cout << "It is clean" << endl;
		else
			cout << "It is dirty" << endl;
	}
	else if (type == 2) {
		cout << "You have a knife!" << endl;
		if (isClean == true)
			cout << "It is clean" << endl;
		else
			cout << "It is dirty" << endl;
	}
	else
		cout << "That isn't a type of silverware!" << endl;
}

void cutlery::use() {
	if (isClean == true) {
		if (type == 0) {
			cout << "You used the fork";
		}
		else if (type == 1) {
			cout << "You used the spoon";
		}
		else if (type == 2) {
			cout << "You used the knife";
		}
		isClean = false;
		cout << " it is dirty now." << endl;
	}
	else if (isClean == false) {
		cout << "the silverware is already dirty why would you use it again?" << endl;
	}
}


void cutlery::wash() {
	if (isClean == false) {
		if (type == 0) {
			cout << "You washed the fork";
		}
		else if (type == 1) {
			cout << "You washed the spoon";
		}
		else if (type == 2) {
			cout << "You washed the knife";
		}

		isClean = true;
		cout << " it is clean now." << endl;
	}
	else if (isClean == true) {
		cout << "Why would you clean it again, it is already clean." << endl;
	}
}
