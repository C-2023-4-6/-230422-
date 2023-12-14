#include<iostream>
#include"mytriangle.h"
using namespace std;
int main()
{
	double s = 0;
	double a;
	double b;
	double c;
	cout << "请输入三角形三边" << endl;
	cin >> a;
	cin >> b;
	cin >> c;
	if (is_valid(a, b, c))
		cout << "三角形的面积为" << double_area (a,b,c)<< endl;
}