#include <iostream>
#include "str.h"
using namespace std;

void StringCharArray::toCharArray(char* str)
{
	int i, len = this->length();
	
	for (i = 0; i < len; i++)
		*(str + i) = this->at(i);

	*(str + i) = '\0';		//마지막 문자에 null값이 들어간다.
}

int main()
{
	char str[BUFSIZ];
	StringCharArray a("Hello World!");
	a.toCharArray(str);
	cout << str << endl;

	return 0;
}
