#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
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
	Time t1;           //����t1ΪTime�����
	//cin >> tl.hour;      //�����趨��ʱ�� 
	//cin >> tl.minute;
	//cin >> tl.sec;
	//cout << tl.hour << "��" << tl.minute << "��" << tl.sec << endl;
	t1.setime();
	t1.display();
	return 0;
}
