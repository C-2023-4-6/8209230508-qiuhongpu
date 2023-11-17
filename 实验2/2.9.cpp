#include<iostream>
using namespace std;
int main()
{
	float x = 2, y=0, z = 0, j=0, a=0.8;
	for (float i =1;;) {
		z += x;
		y = 2 * x;
		x = y;
		
		if (z > 100) {
			j = z - x / 2;
			cout <<  j*a/ (i-1) << endl;
			break;

		}
		else {
			i++;
		}
	}




}