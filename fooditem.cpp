#include "fooditem.h"



fooditem::fooditem()
{
}
fooditem::fooditem(string b, int c) {
	brand = b;
	count = c;


}
int fooditem::get_c() {
	return count;
}
string fooditem::get_b() {
	return brand;

}

void fooditem::set_c(int c) {
	count = c;
}


fooditem::~fooditem()
{
}
