#pragma once
#include"fooditem.h"
#include"vendingmachine.h"
class stock:public  fooditem
{
private:
	float price;
public:
	stock(float p, string b, int c);
	void Set_p(float p);
	float get_p();
	void reset_conter();

	void foodlist();
	
	~stock();
};

