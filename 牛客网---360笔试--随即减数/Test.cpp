�������
����һ����a0�����������������a1, a2, ...an��
1���ӱ�����[0, a0]�еȸ������ѡ��һ������k0����a1 = a0 - k0��
2���õ������a1֮���ٴӱ�����[0, a1]�еȸ������ѡ��һ������k1������ a2 = a1 - k1��
3��һ��أ��õ������ai֮���ٴӱ�����[0, ai]�еȸ������ѡ��һ������ki����ai + 1 = ai - ki��
��an = 0�ĸ����Ƕ��� ?


#include<iostream>

using namespace std;
const int maxn = 1e5 + 5;
double a[105][105];
int main(){
	int n, x;
	cin >> n >> x;
	for (int i = 0; i <= x; i++){
		a[1][i] = 1.0 / (x + 1);
	}
	if (n == 1){
		printf("%.5f\n", a[1][0]);
		return 0;
	}
	for (int i = 2; i <= n; i++){

		for (int j = 0; j <= x; j++){
			for (int k = j; k <= x; k++){

				a[i][j] += (a[i - 1][k] * (1.0 / (k + 1)));
			}
		}
	}
	printf("%.5f\n", a[n][0]);
	return 0;
}