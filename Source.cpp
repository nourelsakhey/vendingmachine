#include<iostream>
#include"fooditem.h"
#include"coin.h"
#include"moneydrawer.h"
#include"stock.h"
#include"vendingmachine.h"
#include<string>
using namespace std;
void process(float arr[5], coin obj) {
	int x;
	cout << "what type of money are you entering" << endl;
	for (int i = 0;i < 5;i++) {
		cout << i << "   " << arr[i] << endl;
	}
	cin >> x;
	cout<<endl;
	obj.set_usermoney(arr[x]);
	if (obj.get_usermoney() < obj.get_p()) {
		cout << "error the money you entered is not enough" << endl;
		process( arr,  obj);
	}
	else if (obj.get_usermoney() >= obj.get_p())
	{
		float x = obj.get_usermoney();
		float y = obj.get_usermoney()-obj.get_p();
		cout <<"the reminder is :"<< obj.reminder() << endl;
		obj.addingmoney(x);
		obj.subtractingmoney(y);
	}
	
}
int main() {
	float arr[5] = { 0.5,1,5,10,50 };
	int x,c=1;
	coin obj1(5,"chipsy", 10);
	coin obj2(1,"bakerools", 10);
	coin obj3(5, "pepsi", 10);
	coin obj4(4,"juice", 10);
	coin obj5(5,"forno", 10);
	coin  obj6(5,"chocolate", 10);
	coin obj7(3,"water", 10);
	coin obj8(10,"icedtea", 10);
	coin obj9(20,"icedcoffee", 10);
	coin obj10(5,"cookies", 10);
	cout << "welcome to the vendingmachine" << endl;
	cout << "Entre your choice" << endl;
	obj1.foodlist();
	obj2.foodlist();
	obj3.foodlist();
	obj4.foodlist();
	obj5.foodlist();
	obj6.foodlist();
	obj7.foodlist();
	obj8.foodlist();
	obj9.foodlist();
	obj10.foodlist();
	vendingmachine v1;
	v1.outuseritem();
	cout << v1.get_useritem();
	cout << endl;
	if (v1.get_useritem() == "chipsy") {
		process( arr, obj1);
	}
	if (v1.get_useritem() == "bakerools") {
		process(arr, obj2);
	}
	if (v1.get_useritem() == "pepsi") {
		process(arr, obj3);
	}
	if (v1.get_useritem() == "juice") {
		process(arr, obj4);
	}
	if (v1.get_useritem() == "forno") {
		process(arr, obj5);
	}
	if (v1.get_useritem() == "chocolate") {
		process(arr, obj6);
	}
	if (v1.get_useritem() == "water") {
		process(arr, obj7);
	}
	if (v1.get_useritem() == "icedtea") {
		process(arr, obj8);
	
	}
	if (v1.get_useritem() == "icedcoffee") {
		process(arr, obj9);
	}
	if (v1.get_useritem() == "cookies") {
		process(arr, obj10);
	}

	cin >> x;

	return 0;
	system("pause");
}