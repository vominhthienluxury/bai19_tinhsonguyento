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
bool kiemtraSCP(int x) {
	if (sqrt(x) == (int)sqrt(x)) return true;
	return false;

}
int main() {
	
	cout << "KIEM TRA SO CO PHAI SO NGUYEN TO KHONG\n";
	int n;
	cout << "nhap so: "; cin >> n;
		for (int y = 1; y <= n; y++)
		{
			if (kiemtraSNT(y) == true) cout << y << " ";
		
	}
		for (int i = 1; i < 100; i++)
		{
			if (sqrt(i) == (int)sqrt(i)) cout << i << "la so chinh phuong\n";
		}
		
	return 0;

}
