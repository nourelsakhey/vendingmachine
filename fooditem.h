#pragma once
#include<string>
#include<iostream>
#include"vendingmachine.h"
using namespace std;
class fooditem :public vendingmachine
{
private:
	string brand;
	int count=10;
public:
	fooditem();
	fooditem(string b, int c);
	int get_c();
	string get_b();
	
	void set_c(int c);
	~fooditem();
};

