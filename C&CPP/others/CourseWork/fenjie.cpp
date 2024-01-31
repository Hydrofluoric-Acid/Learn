#include<iostream>
#include<cstdio>
using namespace std;
int n, ans[100];

bool is_prime(int);//判断是否为质数
void fenjie(int,int);//将数分解

int main() {
	
	cin >> n;
	fenjie(n,0);
	cout << n << "=";
	for (int i = 0; i < 100; i++) {
		if (ans[i] == 0)break;
		cout << ans[i];
		if (ans[i+1] != 0)cout<<"*";//输出
	}

}
bool is_prime(int a) {
	if (a == 1)return false;
	for (int i = 2; i * i <= a; i++) {//循环到根号a来判断，同时使用乘法来加快程序速度
		if (a % i == 0)return false;//通过判断能否被整除判断是不是质数
	}
	return true;
}
void fenjie(int a,int index) {
	if (is_prime(a)) {
		ans[index] = a;
	}
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0 && is_prime(i)) {
			ans[index++]=i;
			fenjie(a / i,index);//递归
		}
	}
}