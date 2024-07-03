#include<iostream>
#include <conio.h>

using namespace std;
int main(){
	int loai;
	int t500, t200, t100, t50, t1;
	int sotien;
	cout << "Nhap So Tien: ";
	cin >> sotien;
	t500 = sotien / 500;
	sotien = sotien % 500;
	t200 = sotien / 200;
	sotien = sotien % 200;
	t100 = sotien / 100;
	sotien = sotien % 100;
	t50 = sotien / 50;
	sotien = sotien % 50;
	t1 = sotien / 1;
	sotien = sotien - 1;
	cout << "SO Tien RUT LA : " << sotien << endl;
	cout << " So To 500 " << t500 << endl;
	cout << "So To 200 : " << t200 << endl;
	cout << "So To 100 : " << t100 << endl;
	cout << "So To 50 : " << t50 << endl;
	cout << " So To 1k: " << t1 << endl;

	
}