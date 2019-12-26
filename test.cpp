
#include<iostream>
using namespace std;

int F(int n)//函数返回一个数对应的Fibonacci数
{
	if (n == 0 || n == 1)//递归边界
		return 1;
	return F(n - 1) + F(n - 2);//递归公式
}

int main()
{
	//测试
	int n;
	while (cin >> n)
		cout << F(n) << endl;

	return 0;
}