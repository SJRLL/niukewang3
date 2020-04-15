#include<iostream>
using namespace std;

int  IsSjx(int x, int y, int z)
{
	int m;
	if (((x + y)>z) && ((x - y)<z) && ((x + z)>y) && ((x - z)<y) && ((y + z)>x) && ((y - z)<x))
	{
		m = 1;
	}
	else
	{
		m = 0;
	}
	return m;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int res = IsSjx(a, b, c);
	if (res == 1)
	{
		if (a ==b||b == c ||a==c)
		{
			cout << "能构成等边三角形" << endl;
		}
		else if (((a*a + b*b) == c*c) || ((a*a + c*c) == b*b) || ((b*b + c*c) == a*a))
		{
			cout << "能构成直角三角形" << endl;
		}
		else
		{
			cout << "能构成三角形" << endl;
		}

	}
	else
	{
		cout << "不可以构成三角形" << endl;
	}
	system("pause");
	return 0;
}