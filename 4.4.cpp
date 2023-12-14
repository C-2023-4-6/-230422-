//#include<iostream>
//using namespace std;
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);
//int main()
//{
//	int size1, size2, size3;
//	//size1 <= 80;
//	//size2 <= 80;
//	cout << "ÇëÊäÈësize1£º";
//	cin >> size1;
//	int list1[80];
//	for (int i = 0;i < size1;i++)
//		cin >> list1[i];
//	cout << "ÇëÊäÈësize2£º";
//	cin >> size2;
//	int list2[80];
//	for (int j = 0;j < size2;j++)
//		cin >> list2[j];
//	size3 = size1 + size2;
//	int list3[80];
//	merge( list1, size1, list2,size2, list3);
//	return 0;
//}
//void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
//{
//	int temp;
//	
//	/*for (int k = 0;k < size1;k++)
//		list3[k] = list1[k];
//	for(int x=0;x<size2;x++)
//		list3[]
//	cout*/
//	for (int n = 0;n < (size1 + size2) - 1;n++)
//		for(int m=0;m<(size2+size1);m++)
//			if (list3[m] > list3[m + 1])
//			{
//				temp = list3[m];
//	            list3[m] = list3[m+1];
//	            list3[m+1] = temp;
//			}
//	for (int a = 0;a < (size1 + size2);a++)
//		cout << list3[a] << "   ";
//}
#include<iostream>
#include<string>
using namespace std;

void arrange(const int list[], int size);
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]);

int main()
{
	int size1, size2, size3;
	cout << "Enter size1: ";
	cin >> size1;
	cout << "Enter list1: ";
	int list1[80];
	for (int i = 0;i < size1;i++)
		cin >> list1[i];
	cout << "Enter size2: ";
	cin >> size2;
	cout << "Enter list2: ";
	int list2[80];
	for (int i = 0;i < size2;i++)
		cin >> list2[i];
	size3 = size1 + size2;
	int list3[80];
	merge(list1, size1, list2, size2, list3);

	cout << endl;
	return 0;
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int temp;
	for (int j = 0;j < size1;j++)
		list3[j] = list1[j];
	for (int k = 0;k < size2;k++)
		list3[size1 + k] = list2[k];
	cout << "The merged list is : ";
	for (int m = 0;m < (size1 + size2) - 1;m++)
		for (int b = 0;b < (size1 + size2) - 1;b++)
			if (list3[b] > list3[b + 1])
			{
				temp = list3[b];
				list3[b] = list3[b + 1];
				list3[b + 1] = temp;
			}
	for (int a = 0;a < (size1 + size2);a++)
		cout << list3[a] << "  ";
}

//void arrange(const int list3[],int size)
//{
//	int temp;
//	for (int m=0;m<size-1;m++)
//		for(int b=0;b<size-1;b++)
//			if (list3[b]>list3[b+1])
//			{
//				temp=list3[b];
//				list3[b]=list3[b+1];
//				list3[b+1]=temp;
//			}
//}
