#include<iostream>
using namespace std;
const int listSize = 10;
//double swap(int a)
//{
//	double arr[10];
//	double temp;
//	//b = a + 1;
//	temp = arr[a];
//	arr[a] = arr[a+1];
//	arr[a+1] = temp;
//	return 1;
//}
void xiaoyang(double list[10])
{
	bool changed = true;
    double temp;
	do
	{
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
			if (list[j] > list[j + 1])
			{
				//swap list[j] with list[j + 1];
				//swap(j);
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);

}
int main()
{
	double list[listSize];
	cout << "ÇëÊäÈë10¸öÊý" << endl;
	for (int i = 0;i < listSize;i++)
		cin >> list[i];
	xiaoyang(list);
	for (int k = 0;k < listSize;k++)
		cout << list[k] << "   ";
	cout << endl;
	return 0;
}