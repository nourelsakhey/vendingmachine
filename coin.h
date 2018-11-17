#pragma once
#include<iostream>
#include"moneydrawer.h"
#include"stock.h"
using namespace std;
class coin : public moneydrawer 
{
	int moneycounter;
public:
	coin(float p, string b, int c);
	float reminder();
	 void addingmoney(float &y) ;
	 void subtractingmoney(float &x);
	~coin();
};

