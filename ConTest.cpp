//p364_30

#include "ConTest.h" 

//ConTest.cpp ���� ����
CON1::CON1(const int c) : c(200)		//c�� 200���� �ʱ�ȭ
{
	//this->c = c;
	cout << "*** CON1�� ������***" << endl;
	cout << "c=" << this->c << endl;
}


CON1::~CON1()
{
	cout << "*** CON1�� �Ҹ���***" << endl;
}

CON2::CON2():CON1(300)		//
{
	cout << "*** CON2�� ������***" << endl;
	cout << "c=" << c << endl;
}

CON2::~CON2()
{
	cout << "*** CON2�� �Ҹ���***" << endl;
}

