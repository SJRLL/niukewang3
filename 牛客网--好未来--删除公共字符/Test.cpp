��Ŀ����
���������ַ������ӵ�һ�ַ�����ɾ���ڶ����ַ��������е��ַ������磬���롱They are students.���͡�aeiou����
��ɾ��֮��ĵ�һ���ַ�����ɡ�Thy r stdnts.��
�������� :
ÿ�������������2���ַ���
������� :
���ɾ������ַ���
ʾ��1

����

They are students.
aeiou

���

Thy r stdnts.

#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1, str2;
	getline(cin, str1);
	getline(cin, str2);

	string res = "";
	for (int i = 0; i<str1.size(); ++i)
	{
		int flag = 1;
		for (int j = 0; j<str2.size(); ++j)
		{
			if (str1[i] == str2[j])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			res += str1[i];
		}
	}
	cout << res << endl;
}