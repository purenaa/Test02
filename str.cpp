#include <iostream>
#include "str.h"
using namespace std;

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();
	
	for (i = 0; i < len; i++)
		*(str + i) = this->at(i);

	*(str + i) = '\0';		//������ ���ڿ� null���� ����.
}

int main()
{
	char str[BUFSIZ];
	StringCharArray a("Hello World!");
	a.toCharArray(str);
	cout << str << endl;

	return 0;
}
