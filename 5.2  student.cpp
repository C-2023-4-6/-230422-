//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"        
using namespace std;//��Ҫ©д���У��������ͨ����
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num��" << num << endl;
    cout << "name " << name << endl;
    cout << "sex��" << sex << endl;
}
void Student::set_value(int n, const char c[20], char s) //�����ⶨ��set_value�ຯ��
{
    num = n;
    //strcpy(name, na);
    for (int i = 0; i <= 20; i++)
        name[i] = c[i];
    sex = s;
}