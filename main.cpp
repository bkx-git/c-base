#include<iostream>
#include<string>
#include "Student.h"
using namespace std;

int main()
{
	/*char s[12] = "heqllod";
	char p[12] = "woerlloed";
	char *p1 = get_same_sequence(&s[0], &p[0]);
	char *p2 = get_same_string(&s[0], &p[0]);
	cout << p1 << endl;
	cout << p2 << endl;
	delete[] p1, p2;
	char a = '1';
	//将字符转化为相应的整数
	cout << a-'0'<< endl;
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;
	if (-1)
		cout << "no" << endl;
	*/
	//对象的赋值与复制
	Student zhangsan("张三", 'm', 13, 2016);
	Student lisi("李四", 'f', 15, 2014);
	//赋值:是对已经存在的两个对象进行操作,只对成员变量赋值
	lisi = zhangsan;
	//复制:是一个对象从无到有的一个过程
	//在对象创建的时候就以一个已经存在的对象为源头进行创建本对象。
	//Student wangwu = zhangsan;
	//Student liuliu(zhangsan);//拷贝构造
	return 0;
}