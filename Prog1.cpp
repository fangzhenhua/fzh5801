#include "stdafx.h"
#include<iostream>
using namespace std;

int main(void)
{
	int a[100];
	int s = 0;
	for (int i = 0; i<100; i++)
	{
		a[i] = i + 1;
		s = s + a[i];
	}
	cout << "运算结果为" << s << "\n";
	return 0;
}
