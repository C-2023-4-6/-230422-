#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void setime() {
		cin >> hour >> minute >> sec;
	}
	void display() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	//cin >> tl.hour;      //输入设定的时间 
	//cin >> tl.minute;
	//cin >> tl.sec;
	//cout << tl.hour << "：" << tl.minute << "：" << tl.sec << endl;
	t1.setime();
	t1.display();
	return 0;
}
