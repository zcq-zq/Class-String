#include"iotekstring.h"
#include<iostream>
using namespace::std;
using namespace::iotek;

int main(int argc, const char*argv[])
{
	String s1("hello");//���ù��캯��

	String s2 = s1;//���ÿ������캯��

	String s3 = "world";//���ù��캯��

	s3 = s1;//���õ�һ�ָ�ֵ���������

	s3 = "world";//���õڶ��ָ�ֵ���������

	cout << "s3=" << s3.data() << endl;


	system("pause");
	return 0;
}