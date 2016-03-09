#include "stdafx.h"
#include<iostream>
using namespace std;


int ArraySum(int s, int min, int max)
{
	int *a;
	int sum = 0;
	a = new int[s];
	for (int i = min, j = 0; i <= max; i++, j++)
	{
		a[i] = min + j; sum += a[i];
	}
	
	return sum;
}

int main(void)
{
	int s, min, max;
	int Sum;
	cout << "请输入数组的长度:";
	cin >> s;
	cout << "请输入起始下标:";
	cin >> min;
	cout << "请输入终止下标:";
	cin >> max;
	Sum = ArraySum(s, min, max);
	cout << "数组的和为:" << Sum;
	return 0;
}
