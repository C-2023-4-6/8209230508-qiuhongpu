#include<iostream>
using namespace std;
int main()
{
	cout << "�������ַ���" << endl;
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
	cout << "��ĸ��" << a << "��" << endl;
	cout << "�ո���" << b << "��" << endl;
	cout << "������" << c << "��" << endl;
	cout << "������" << d << "��" << endl;
}
