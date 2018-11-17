#include "vendingmachine.h"



vendingmachine::vendingmachine()
{
}
void vendingmachine::foodlist(){}
void vendingmachine::outuseritem() {
	cin >> useritem;
	cout << endl;
}
string vendingmachine::get_useritem() {
	return useritem;
}

vendingmachine::~vendingmachine()
{
}
