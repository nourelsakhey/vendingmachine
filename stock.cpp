#include "stock.h"



stock::stock(float p,string b, int c):fooditem(b,c)
{
	price = p;
}
void stock::Set_p(float p) {
	price = p;
}
float stock::get_p() {
	return price;
}
void stock::reset_conter() {
	if (get_useritem() != "") {
		set_c(get_c()-1);

	}
}
void stock::foodlist() {
	cout << get_b() <<"   "<<get_p()<< endl;

}


stock::~stock()
{
}
