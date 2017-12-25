#include <iostream>
#include "Function.h"
using namespace std;

void NhapMangint(int a[][100], int &m, int &n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void NhapMangfloat(float a[][100], int &m, int &n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void XuatMangint(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}



void XuatMangfloat(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

void tongtrendong(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		float s = 0;
		for (int j = 0; j < n; j++)
		{
			s = s + a[i][j];
		}
		cout << s << endl;
	}
}

void tongduongtrendong(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		float s = 0;
		for (int j = 0; j < n; j++)
		{
			if (a[i][j]>0)
				s = s + a[i][j];
		}
		cout << s << endl;
	}
}

void tongtrenbien(float a[][100], int m, int n)
{
	float s = 0;
	for (int j = 0; j < n; j++)
		s = s + a[0][j];
	for (int j = 0; j < n; j++)
		s = s + a[m - 1][j];
	for (int i = 0; i < n; i++)
		s = s + a[i][0];
	for (int i = 0; i < n; i++)
		s = s + a[i][n - 1];
	s = s - a[0][0] - a[0][n - 1] - a[n - 1][m - 1] - a[m - 1][0];
	cout << "  " << s;

}

void tongtrencot(int a[][100], int m, int n)
{
	for (int j = 0; j < n; j++)
	{
		float s = 0;
		for (int i = 0; i < m; i++)
		{
			if (a[i][j] % 2 == 1)
				s = s + a[i][j];
		}
		cout << s << " ";
	}
}

bool snt(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0)
			return false;
	}
	return true;
}

int demsonguyento(int a[][100], int m, int n)
{
	int c = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (snt(a[i][j]) == true)
				c++;
		}
	}
	return c-1;
}


bool sht(int n)
{
	int s = 0;
	for (int i = 1; i < n; i++)
		if (n%i == 0)
			s = s + i;
	if (s == n)
		return true;
	else
		return false;
}
void demsohoanthien(int a[][100], int m, int n)
{
	
	for (int i = 0; i < m; i++)
	{
		int c = 0;
		for (int j = 0; j < n; j++)
		{
			if (sht(a[i][j]) == true)
				c++;
		}
		cout << c << " ";
	}
	
}

bool kiemtracucdai(float a[][100], int m, int n, int i, int j)
{
	{
		
		int t = a[i][j];
		if (t < a[i + 1][j])
			return false;
		if (t < a[i][j + 1])
			return false;
		if (t < a[i][j + 1])
			return false;
		if (t < a[i][j + 1])
			return false;
		if (t < a[i][j + 1])
			return false;
		if (t < a[i][j + 1])
			return false;
		if (t < a[i - 1][j])
			return false;
		if (t < a[i][j - 1])
			return false;
		if (t < a[i - 1][j - 1])
			return false;
		if (t < a[i + 1][j + 1])
			return false;
		if (t < a[i - 1][j + 1])
			return false;
		if (t < a[i + 1][t - 1])
			return false;
	}
	return true;
}

void demcucdai(float a[][100], int m, int n)
{
	int c = 0;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (kiemtracucdai(a, m, n, i, j) == true)
			{
				c++;
				//cout << a[i][j] << " " << i << " " << j << endl;
			}
		}
	}
	cout << " " << c;
}

void NhapMaTran_342(float a[][100], int &m, int &n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			a[i][j] = 0;
		}
	}
}

void ChinhDuLieu(float a[][100],int m, int n)
{
	for (int i = 1; i < m + 1; i++)
	{
		for (int j = 1; j < n + 1; j++)
		{
			cin >> a[i][j];
		}
	}
}

void XuatMaTran_342(float a[][100], int m, int n)
{
	for (int i = 0; i < m + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}

bool tontaisole(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j]%2==1)

				return true;
		}
	}
	return false;
}

void hangtangdan(int a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m - 1; j++)
		{
			if (a[i][j] > a[i][j + 1])
			{
				cout << "Khong tang dan ";
				system("pause");
			}
		}
	}

	{
		cout << "Tang dan";
		system("pause");
	}
}

void lietkedongnguyentover1(int a[][100], int m, int n)
{
	int i = 0;
	int j = 0;
	while(i<m)
	{
		while(j<n)
		{
			if (snt(a[i][j]) == true && a[i][j]!=1)
			{
				cout << i << " " ;
				if (i == m - 1)
				{
					system("pause");
					exit;
				}
				j = 0;
				i++;
			}
			else
			{
				j++;
			}
		}
	}
	
	
}

void lietkedongnguyento(int a[][100], int m, int n)
{
	bool flag[100];
	for (int i = 0; i < 100; i++)
	{
		flag[i] = false;
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (snt(a[i][j]) == true && a[i][j] != 1)
				flag[i] = true;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (flag[i] == true)
			cout << i << " ";
	}
}

bool CP(int n)
{
	for (int i = 0; i < n; i++)
		if (i*i == n)
			return true;
	return false;
}

void lietkecotchinhphuong(int a[][100], int m, int n)
{
	bool flag[1000];
	for (int i = 0; i < 1000; i++)
		flag[i] = false;
	for (int i = 0; i<m; i++)
	{
		for (int j = 0; j<n;j++)
		{
			if (CP(a[i][j]) == true )
			{
				flag[j] = true;
				//cout << a[i][j] << " ";
			}
		}
	}
	for (int i = 0; i < 1000; i++)
	{
		if(flag[i]==true)
			cout << i << " ";
	}
}

void giatrilonnhat(float a[][100], int m, int n)
{
	float max = -100000;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
	}
	cout << "gia tri lon nhat la " << max << endl;
}

float giatriduongdautien(float a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] > 0)
				return a[i][j];
		}
	}
	return -1;
}

void giatrinhonhattrenmotcot(float a[][100], int m, int n)
{
	for (int j = 0; j<n; j++)
	{
		float mincot = 10000;
		for (int i = 0; i<m; i++)
		{
			if (a[i][j] < mincot)
				mincot = a[i][j];
		}
		cout << mincot << " ";

	}
}

int demsochuso(int n)
{
	int c = 0;
	while (n > 0)
	{
		c++;
		n = n / 10;
	}
	return c;
}

void lietkecotconhieuchusonhat(int a[][100], int m, int n)
{
	int demcot[1000] = { 0 };
	for (int j = 0; j < n; j++)
	{
		
		for (int i = 0; i < m;i++)
		{
			demcot[j] = demcot[j] +demsochuso( a[i][j]);
		}
	}

	int maxtongtrencot = -1000;
	for (int i = 0; i < 1000; i++)
	{
		if (demcot[i] > maxtongtrencot)
		{
			maxtongtrencot = demcot[i];
		}
	}
	cout << " " << maxtongtrencot;
}

void hoanvi(float&a, float&b)
{
	int t = a;
	a = b;
	b = t;
}

void hoanvihaidong(float a[][100], int m, int n, int x, int y)
{
	
	
		for (int j = 0; j < n; j++)
		{
			hoanvi(a[x][j], a[y][j]);
		}
	
}

void hoanvihaicot(float a[][100], int m, int n, int x, int y)
{
	for (int i = 0; i < m; i++)
		{
		hoanvi(a[i][x], a[i][y]);
		}
	
}

void dichxuongxoayvong(float a[][100], int m, int n)
{
	for (int i = 0; i < m-1; i++)
	{
		hoanvihaidong(a, m, n, i, i + 1);
	}
	
}

void dichtraixoayvong(float a[][100], int m, int n)
{
	for (int i =0; i <n-1; i++)
	{
		hoanvihaicot(a,m,n,i,i+1);
	}
}

void chieuguong(float a[][100], int m, int n)
{
	float b[100][100];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j <= 2 * n - 1; j++)
		{
			if (j <= n - 1)
				b[i][j] = a[i][j];
			if (j > n - 1)
			{
				b[i][j] = a[i][2*n-j-1];
			}
		}
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j <= 2 * n - 1; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

void NhapMaTran_428(float a[][100], int &m, int &n)
{
	cin >> m;
	cin >> n;
	for (int i = 0; i < m + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			a[i][j] = -10000;
		}
	}
}


void chuyenNhiPhan(float a[][100], int m, int n)
{
	for (int i = 0; i < m + 2; i++)
	{
		for (int j = 0; j < n + 2; j++)
		{
			if (a[i][j] < 0)
				a[i][j] = 0;
			else
				a[i][j] = 1;
		}
	}
}


void SinhMangCon(float a[][100], int m, int n)
{
	
	float b[100][100];
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			b[i][j] = (a[i + 1][j]) + (a[i][j + 1]) + (a[i - 1][j]) + (a[i][j - 1]) + (a[i - 1][j - 1]) + (a[i + 1][j + 1]) + (a[i - 1][j + 1]) + (a[i + 1][j - 1]);
			cout << b[i][j] << " ";
		}
		cout << "\n";
	}
}