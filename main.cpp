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
	//���ַ�ת��Ϊ��Ӧ������
	cout << a-'0'<< endl;
	cout << INT_MAX << endl;
	cout << INT_MIN << endl;
	if (-1)
		cout << "no" << endl;
	*/
	//����ĸ�ֵ�븴��
	Student zhangsan("����", 'm', 13, 2016);
	Student lisi("����", 'f', 15, 2014);
	//��ֵ:�Ƕ��Ѿ����ڵ�����������в���,ֻ�Գ�Ա������ֵ
	lisi = zhangsan;
	//����:��һ��������޵��е�һ������
	//�ڶ��󴴽���ʱ�����һ���Ѿ����ڵĶ���ΪԴͷ���д���������
	//Student wangwu = zhangsan;
	//Student liuliu(zhangsan);//��������
	return 0;
}