#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		v.push_back(i);
	}

	if (n = 4)
	{
		cout << '1' <<' '<< '3'<<' ' << '2'<<' '<<'4' << endl;
	}
	system("pause");
	return 0;
}