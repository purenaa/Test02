#include "ConTest.h"
#include <cstdlib>

int main()
{
#if 0		//���� stack�� �Ҵ�
	CON2 *p_obj = new CON2;		//new�� delete�� �ؾ� �ҷ�����.
	CON2* p_obj = (CON2*)malloc(sizeof(CON2));
	delete p_obj;		//delete�� ����� �Ҹ��ڰ� �������.
	//free(p_obj);
#else
	CON2 obj;		//���� heap�� �Ҵ�
#endif

	return 0;
}


//int main()
//{
//	CON2* p_TEST = new CON2;
//
//	delete p_TEST;
//
//	return 0;
//}