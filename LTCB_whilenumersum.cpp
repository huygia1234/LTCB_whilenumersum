// LTCB_whilenumersum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    double so, tong = 0;
    cout << "Nhap so:"; cin >> so; tong = so;
	while (so!=0){
		cout << "nhap so:"; cin >> so;
		tong+=so;
	}
	cout << "tong=" << tong << endl;
	return 0;
}
