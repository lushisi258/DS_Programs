#include <iostream>
using namespace std;

//创建一个二维数组，分配给它实际的内存空间，并添加异常处理模块
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
		cerr << "发生异常：" << e.what() << endl;
	}
}