#include<iostream>
using namespace std;

//�����������ַ��������Ĵ�д�����ַ���
string Anum = "1234567890";
string Cnum = "Ҽ��������½��ƾ�ʰ��Ǫ�f���׾�";

//�쳣���壺���������Ч�Ļ��׳����쳣
class InvalidContent : public exception
{
public:
	const char* what() const noexcept override { return "����������Ч"; }
};

//�ж��Ƿ�ȫ�ǰ���������
bool ifAnum(string n)
{
	for (char c : n) //�����ַ���n
	{
		if(Anum.find(c) == string::npos)
		{
			return false;
			break;
		}
		return true;
	}
}

//�ж��Ƿ�ȫ�����Ĵ�д����
bool ifCnum(string n)
{
	for (char c : n) //�����ַ���n
	{
		if (Cnum.find(c) == string::npos)
		{
			return false;
			break;
		}
		return true;
	}
}

//ת������
string trans(const string n)
{
	try 
	{
		if(ifAnum(n))
		{
			sting gn, wn, yn;//����������������
		}
		else if (ifCnum(n))
		{
			string gn, wn, yn;//����������������
		}
	}
	catch (const InvalidContent& e)
	{
		cerr << "��������" << e.what() << endl;
	}
}