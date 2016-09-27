#include <iostream>
#include "Circle.cpp"

#include "stdafx.h"
using namespace std;

int main(){

	MyCircle mc;

	cout << mc.getCS() << endl;

	MyPoint p(2,3);
	MyCircle cc(p, 2);

	cout << cc.getCS() << endl;


	MyPoint::count = 9;
	cout << MyPoint::getCount();


	return 0;

}