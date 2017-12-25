#include <iostream>
#include "Function.h"

using namespace std;

int main()
{
	cout << "Nhap m, n" << endl;
	int m, n;
	float a[100][100];
	
	NhapMaTran_428(a, m, n);
	ChinhDuLieu(a, m, n);
	chuyenNhiPhan(a, m, n);
	SinhMangCon(a, m, n);
	system("pause");
	return 0;
}