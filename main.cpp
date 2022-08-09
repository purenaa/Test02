#include "ConTest.h"
#include <cstdlib>

int main()
{
#if 0		//정적 stack에 할당
	CON2 *p_obj = new CON2;		//new는 delete를 해야 불려진다.
	CON2* p_obj = (CON2*)malloc(sizeof(CON2));
	delete p_obj;		//delete를 지우면 소멸자가 사라진다.
	//free(p_obj);
#else
	CON2 obj;		//동적 heap에 할당
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