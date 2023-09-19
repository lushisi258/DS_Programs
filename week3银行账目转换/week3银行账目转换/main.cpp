#include<iostream>
using namespace std;

//阿拉伯数字字符串和中文大写数字字符串
string Anum = "1234567890";
string Cnum = "壹贰叁肆伍陆柒捌玖拾佰仟萬亿兆京";

//异常定义：如果输入无效的话抛出的异常
class InvalidContent : public exception
{
public:
	const char* what() const noexcept override { return "输入内容无效"; }
};

//判断是否全是阿拉伯数字
bool ifAnum(string n)
{
	for (char c : n) //遍历字符串n
	{
		if(Anum.find(c) == string::npos)
		{
			return false;
			break;
		}
		return true;
	}
}

//判断是否全是中文大写数字
bool ifCnum(string n)
{
	for (char c : n) //遍历字符串n
	{
		if (Cnum.find(c) == string::npos)
		{
			return false;
			break;
		}
		return true;
	}
}

//转换函数
string trans(const string n)
{
	try 
	{
		if(ifAnum(n))
		{
			sting gn, wn, yn;//个数，万数，亿数
		}
		else if (ifCnum(n))
		{
			string gn, wn, yn;//个数，万数，亿数
		}
	}
	catch (const InvalidContent& e)
	{
		cerr << "出错啦：" << e.what() << endl;
	}
}