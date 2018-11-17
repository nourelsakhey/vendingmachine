#pragma once
#include<iostream>
using namespace std;

#include"stock.h"
class moneydrawer:public stock

{
private:
	float arr[5] = { 0.5,1,5,10,50 };
	float fifty;
	float ten;
	float five;
	float pound;
	float halfpound;
	float usermoney=0;
public:
	moneydrawer(float p, string b, int c);
	void set_usermoney(float um);
	float get_arr(int i);
	float get_usermoney();
	virtual void addingmoney(float &y)=0;
	virtual void subtractingmoney(float &x)=0;
	void putmoney();
	~moneydrawer();
};

