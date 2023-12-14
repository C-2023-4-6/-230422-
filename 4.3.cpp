#include<iostream>
using namespace std;
int main()
{
	const int size = 100;
	bool arr[size];
	for (int i = 0;i < size;i++)//设置100个关闭的存物柜
	{
		arr[i] = false;
	}
	for(int j=0;j<size;j++)//
		for (int k = j;k < size;k += j + 1)
		{
			if (arr[k])
				arr[k] = false;
			else
				arr[k] = true;
		}
	for (int m = 0;m < size;m++)//输出开着的存物柜
	{
		if (arr[m])
			cout << m + 1 << "   ";
	}
	return 0;
}
