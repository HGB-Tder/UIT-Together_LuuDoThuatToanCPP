#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "Nhap a= ";
	cin >> a;
	cout << "Nhap b= ";
	cin >> b;
	int temp = a;
	a = b;
	b = temp;
	cout << "Hoan vi hai so a= " << a << " b= " << b;
	return 0;
}
