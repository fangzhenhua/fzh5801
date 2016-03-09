#include "stdafx.h"
#include<iostream>
#include<fstream>
using namespace std;

int ArraySum(int s)
{
	int *a;
	int sum = 0;
	a = new int[s];
	for (int i = 0; i < s; i++)
	{
		a[i] = i + 1; sum += a[i];
	}

	return sum;
}

int main(void)
{
	int s;
	int Sum;
	cout << "请输入数组的长度:";
	cin >> s;
	Sum = ArraySum(s);
	cout << "和为:" << Sum;
	return 0;
}
