有两个字符串（可能包含空格）, 请找出其中最长的公共连续子串, 输出其长度。


输入描述 :
给定两行字符串

长度在1000以内


输出描述 :
输出这两个字符串的最长公共连续子串的长度
示例1
输入
abcde
bcd
输出
3

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1, s2;
	while (cin >> s1 >> s2)
	{

		int len1 = s1.size();
		int len2 = s2.size();
		if (len1 == 0 || len2 == 0)
		{
			cout << "" << endl;
			break;
		}
		if (len1>len2)
		{
			swap(s1, s2);
		}
		string Maxstr;
		len1 = s1.size();
		len2 = s2.size();
		for (int i = 0; i<len1; ++i)
		{
			for (int j = i; j<len2; ++j)
			{
				string res = s1.substr(i, j - i + 1);
				if (int(s2.find(res))<0)
				{
					break;
				}
				else if (res.size()>Maxstr.size())
				{
					Maxstr = res;
				}
			}
		}
		cout << Maxstr << endl;
	}

	return 0;
}