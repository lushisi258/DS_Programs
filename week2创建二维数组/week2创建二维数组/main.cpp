#include <iostream>
using namespace std;

//����һ����ά���飬�������ʵ�ʵ��ڴ�ռ䣬������쳣����ģ��
void main()
{
	try
	{
		int rows, cols;
		cout << "rows=";
		cin >> rows;
		cout << "cols" << endl;
		cin >> cols;
		int** array = new int* [rows];
		for (int i = 0; i < rows; i++)
		{
			array[i] = new int[cols];
		}
	}
	catch (const exception& e)
	{
		cerr << "�����쳣��" << e.what() << endl;
	}
}