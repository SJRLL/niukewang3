//题目描述：删除字符串中连续三个重复的字母，直到不能删除为止。
//
//输入：asssbba
//输出：assbba
//

//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//int main()
//{
//	string s;
//	cin >> s;
//	int i = 1;
//	string res;
//	while (i < s.size())
//	{
//		int count = 1;
//		res += s[i - 1];
//		while (i<s.size()&& s[i - 1] == s[i])
//		{
//			count++;
//			if (count >= 3)
//			{
//				i++;
//				continue;
//			}
//			res += s[i];
//			i++;
//		}
//		i++;
//	}
//	if (i == s.size())
//	{
//		res += s[s.size() - 1];
//	}
//	cout << res << endl;
//	system("pause");
//	return 0;
//}
//

#include<iostream>
#include<stack>
#include<string>
#include<vector>
#include<stdlib.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	vector<char> v;
	vector<int> num;
	int i = 0;
	while (i < str.size())
	{
		if (v.empty() || v[v.size() - 1] != str[i])
		{
			v.push_back(str[i]);
			num.push_back(1);
		}
		else if (v[v.size()-1]==str[i])
		{
			if (num[num.size() - 1] + 1 == 3)
			{
				for (int i = 0; i < 2; ++i)
				{
					v.pop_back();
					num.pop_back();
				}
			}
			else
			{
				v.push_back(str[i]);
				num.push_back(num[num.size() - 1] + 1);
			}
		}
	  i++;
	}
	string res;
	for (int i = 0; i < v.size(); ++i)
	{
           res+=v[i];
	}
	cout << res << endl;
	system("pause");
	return 0;
}