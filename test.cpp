
#include<iostream>
using namespace std;

int F(int n)//��������һ������Ӧ��Fibonacci��
{
	if (n == 0 || n == 1)//�ݹ�߽�
		return 1;
	return F(n - 1) + F(n - 2);//�ݹ鹫ʽ
}

int main()
{
	//����
	int n;
	int i = 0; //a1��ӵ����
	while (cin >> n)
		cout << F(n) << endl;

	return 0;
}