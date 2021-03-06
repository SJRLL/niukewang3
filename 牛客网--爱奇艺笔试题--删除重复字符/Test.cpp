//牛牛有一个由小写字母组成的字符串s, 在s中可能有一些字母重复出现。比如在"banana"中, 字母'a'和字母'n'分别出现了三次和两次。
//但是牛牛不喜欢重复。对于同一个字母, 他只想保留第一次出现并删除掉后面出现的字母。请帮助牛牛完成对s的操作。
//输入描述 :
//输入包括一个字符串s, s的长度length(1 ≤ length ≤ 1000), s中的每个字符都是小写的英文字母('a' - 'z')
//
//
//输出描述 :
//	 输出一个字符串, 表示满足牛牛要求的字符串
//
//示例1
//输入：
//banana
//
//输出：
//ban

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int Re[26] = { 0 };
	for (int i = 0; i < s.size(); ++i)
	{
		if (Re[s[i] - 'a'] == 0)
		{
			cout << s[i];
		}
		Re[s[i] - 'a']++;
	}
	system("pause");
	return 0;
}