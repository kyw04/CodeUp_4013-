#include <iostream>
using namespace std;

void bin(int n)
{
	if (n)
	{
		bin(n >> 1);
		int i = n & 1;
		cout << i;
	}
}
void oct(int n)
{
	if (n)
	{
		oct(n / 8);
		cout << n % 8;
	}
}
void hex(int n)
{
	if (n)
	{
		hex(n / 16);
		int i = n % 16;
		if (i >= 10)
		{
			char t = 'A' + (i % 10);
			cout << t;
		}
		else
			cout << i;
	}
}
int main()
{
	int n;
	cin >> n;
	cout << "2 ";
	bin(n);
	cout << endl << "8 ";
	oct(n);
	cout << endl <<  "16 ";
	hex(n);
	return 0;
}