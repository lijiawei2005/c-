#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main() {
	//if,else,else if���÷�

	//�����if��ִ�еĻ����ͻ�ִ��else
	int d = 0;
	cin >> d;
	if (d == 1)
		cout << "d��ֵΪ1" << endl;
	else
		cout << "d��ֵ��Ϊ1" << endl;
	


	/*����ֻ�����fj����Ϊ��if......else if......else if..�ṹ��ֻҪĳһ�����������ˣ�
	������else if���������*/
	int a = 1;
	int b = 2;
	int c = 3;
	if (a == 1)
		cout << "fj" << endl;
	else	if (b == 2)
		cout << "abc" << endl;
	else if (c == 3)
		cout << "qwe" << endl;
	
	/*�ܵ���˵��if ....else ���÷���������һ�������У�Ҳ�����ں����һ��else, 
	����ǰ���������������ͻ�ִ��else ,    ������if��else ��else if�п���Ƕ��if��else ,���������*/
}