#include<iostream>
using namespace std;

class changfangti {
private:
	double length, width, height;
public:
	void volume(double l,double w,double h) {
		length = l;
		width = w;
		height = h;
	}
	double count() {
		return length * width * height;
	}
};

int main()
{
	changfangti box1, box2, box3;
	double l, w, h;
	cout << "�������һ������������ߣ�  ";
	cin >> l >> w >> h;
	box1.volume(l, w, h);
	cout << "������ڶ�������������ߣ�  ";
	cin >> l >> w >> h;
	box2.volume(l, w, h);
	cout << "���������������������ߣ�  ";
	cin >> l >> w >> h;
	box3.volume(l, w, h);

	double a1 = box1.count();
	double a2 = box2.count();
	double a3 = box3.count();

	cout << "��һ��������������������Ϊ��" << a1 << "   "
		<< a2 << "   " << a3 << endl;
}