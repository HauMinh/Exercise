#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int k, n;
int A[100];
void result()
{
	for (int i = 1; i <= k; i++)
	{
		cout << setw(3) << A[i];
	}
	cout << endl;
}
void Back(int i)
{
	for (int j = A[i - 1] + 1; j <= n - k + i; j++)
	{
		A[i] = j;
		if (i == k)
		{
			result();
		}
		else
		{
			Back(i + 1);
		}
	}
}
void tohop()
{
	if (k >= 0 && k <= n)
	{
		A[0] = 0;
		Back(1);
	}
	else
	{
		cout << "Yeu cau khong duoc hoan thanh\n";
	}
}
int main()
{
	cout<<"Nhap n: ";
	cin>>n;
	cout<<"Nhap k: ";
	cin>>k;
	tohop();
	return 0;
}
