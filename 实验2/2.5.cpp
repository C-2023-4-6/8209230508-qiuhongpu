#include<iostream>
using namespace std;
int main()
{
	cout << "请输入字符串" << endl;
	char x;
	int a = 0, b = 0, c = 0, d = 0;
	while ((x = getchar()) && (x != '\n'))
	{
		if ((('A' <= x) && (x <= 'Z')) || (('a' <= x) && (x <= 'z')))
		{

			a++;
		}

		else if (x == ' ')
		{
			b++;
		}

		else if (('0' <= x) && (x <= '9'))
		{
			c++;
		}
		else
		{
			d++;
		}
	}
	cout << "字母有" << a << "个" << endl;
	cout << "空格有" << b << "个" << endl;
	cout << "数字有" << c << "个" << endl;
	cout << "其他有" << d << "个" << endl;
}
