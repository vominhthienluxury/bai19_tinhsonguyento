// bai19_tinhsonguyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
bool(kiemtraSNT(int s))
{
	int dem = 0;
	for (int i = 1; i <= s; i++)
	{
		if (s % i == 0) {
			dem++;
		}
	}
	if (dem==2)
	{
		return true;
	}
	else {
		return false;
	}
}
int main() {
	
	cout << "KIEM TRA SO CO PHAI SO NGUYEN TO KHONG\n";
	int so;
	cout << "nhap so: "; cin >> so;
		for (int y = 1; y <= so; y++)
		{
			if (kiemtraSNT(y) == true) cout << y << " ";
		
	}/*
	for (int i = 1; i <= n; i++)
	{
=======
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
>>>>>>> 5f9526fb0a18ef0bf6e99be886a6f638ea227379
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
