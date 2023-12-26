#pragma once
//student.h
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	//Student();
	/*Student(int n, const char* n1, char s);*/
	void set_value(int n, const char c[20], char s);
	/*Student(int a, const char c[20], char b)
	{
		num = a;
		for (int i = 0; i <= 20; i++)
			name[i] = c[i];
		sex = b;
	}*/
private:
	int num;
	char name[20];
	char sex;
};
