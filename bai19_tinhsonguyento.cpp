// bai19_tinhsonguyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "KIEM TRA SO CO PHAI SO NGUYEN TO KHONG!\n";

	int so;
	cout << "Nhap so: "; cin >> so;
	int dem = 0;
	for (int i=1 ; i <= so; i++)
	{
		if (so % i == 0) {
			dem++;

		}
	}
	cout << "So dem = " << dem << endl;
	if (dem==2)
	{
		cout << "So " << so << " la so nguyen to\n";
	}
	else
	{
		cout << "So " << so << " KHONG PHAI LA SO NGUYEN TO\n";
	}
	return 0;
}
