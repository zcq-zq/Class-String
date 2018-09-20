#include"iotekstring.h"
#include<iostream>
using namespace::std;
using namespace::iotek;

int main(int argc, const char*argv[])
{
	String s1("hello");//调用构造函数

	String s2 = s1;//调用拷贝构造函数

	String s3 = "world";//调用构造函数

	s3 = s1;//调用第一种赋值运算符函数

	s3 = "world";//调用第二种赋值运算符函数

	s1 += s3;//调用第一个+=运算符函数
	cout << "s1=" << s1.data() << endl;

	s3 += "!";//调用第二个+=运算符函数
	cout << "s3=" << s3.data() << endl;

	String s4 = s1 + s2;//调用第三个+=运算符函数
	s4 = s1 + "hello";//调用第四个+=运算符函数
	cout << "s4=" << s4.data() << endl;

	system("pause");
	return 0;
}
