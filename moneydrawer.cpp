#include "moneydrawer.h"



moneydrawer::moneydrawer(float p,string b,int c):stock(p,b,c)
{
	
}

void moneydrawer::addingmoney(float &y) {

}
void moneydrawer::subtractingmoney(float &x) {

}
void moneydrawer::putmoney() {
	cin >> usermoney;
}
float moneydrawer::get_usermoney() {
	return usermoney;
}
void moneydrawer::set_usermoney(float um) {
	usermoney = um;
}
float moneydrawer::get_arr(int i) {
	return arr[i];
}



moneydrawer::~moneydrawer()
{
}
