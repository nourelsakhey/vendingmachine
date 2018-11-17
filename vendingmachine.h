#pragma once
#include<iostream>
#include<string>
using namespace std;
class vendingmachine
{private:
	string  useritem;
public:
	vendingmachine();
	~vendingmachine();
	virtual void  foodlist();
	void outuseritem();
	string get_useritem();
};

