随机减数
给定一个数a0，定义如下随机序列a1, a2, ...an。
1、从闭区间[0, a0]中等概率随机选出一个整数k0，令a1 = a0 - k0。
2、得到随机数a1之后，再从闭区间[0, a1]中等概率随机选出一个整数k1，再令 a2 = a1 - k1。
3、一般地，得到随机数ai之后，再从闭区间[0, ai]中等概率随机选出一个整数ki，令ai + 1 = ai - ki。
问an = 0的概率是多少 ?


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