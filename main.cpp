#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double s = 0;
	double a;
	double b;
	double c;
	cout << "����������������" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (is_valid(a, b, c))
		cout << "�����ε����Ϊ" << double_area (a,b,c)<< endl;
}