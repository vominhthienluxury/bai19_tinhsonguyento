// bai19_tinhsonguyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
	int n;
	int dem = 0;
	cout << "nhap so:\n"; cin >> n;
	for (int y = 1; y <= n; y++) {
		dem = 0;
		for (int i = 1; i <= y; i++)
		{
			if (y % i == 0) {
				dem++;

			}
		}
		if (dem == 2) {
			cout << y << " ";
		}
	}/*
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) {
			dem++;

		}
	}
	//cout << "so dem =" << dem << endl;
	if (dem == 2) {
		cout << "So " << n << " la so nguyen to\n";
	}
	else{
		cout << "So " << n << " khong phai la so nguyen to\n";
	}*/
	return 0;

}
