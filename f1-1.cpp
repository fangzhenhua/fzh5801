#include<iostream>
using namespace std;

int main(void)
{
	int a, b = 0, c;
	cout << "输出100到200间的所有素数" << endl;
	for (a = 100; a <= 200; a++)
	{
		for (c = 2; c < a; c++)
		{
			if (a%c == 0)
				break;
		}
		if (a == c)
		{
			cout << a << " ";
			b++;
			if (b % 5 == 0)
				cout << endl;
		}
	}
		return 0;

}
