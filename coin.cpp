#include "coin.h"



coin::coin(float p, string b, int c):moneydrawer(p,b,c)
{
}
void coin::addingmoney(float &y) {
	
	
		for (int i = 5;i > 0;i--) {
			if (y >=get_arr(i)) {
				moneycounter++;
				//set_usermoney(get_usermoney() - get_arr(i));
				y = y - get_arr(i);
			}
			else if (y == 0) {
				return;
			}
			
		}

	
}
float coin::reminder() {
	return get_usermoney() - get_p();
}
void coin::subtractingmoney(float &x) {
	

		for (int i = 5;i > 0;i--) {
			if ( (2 * x) >= get_arr(i) ){
				moneycounter = moneycounter - 2;

					x = x -(2* get_arr(i));
				
			}
			else if (x >= get_arr(i)) {
				moneycounter--;
				x = x - get_arr(i);
			}

		}
	}

coin::~coin()
{
}
