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
	cout << "请输入第一个长方体的三边：  ";
	cin >> l >> w >> h;
	box1.volume(l, w, h);
	cout << "请输入第二个长方体的三边：  ";
	cin >> l >> w >> h;
	box2.volume(l, w, h);
	cout << "请输入第三个长方体的三边：  ";
	cin >> l >> w >> h;
	box3.volume(l, w, h);

	double a1 = box1.count();
	double a2 = box2.count();
	double a3 = box3.count();

	cout << "第一，二，三个长方体的体积为：" << a1 << "   "
		<< a2 << "   " << a3 << endl;
}