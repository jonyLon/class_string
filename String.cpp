#include "String.h"

int mString::count = 0;
void mString::strCopy(char*& dest, const char* source)
{
	int length = strlen(source) + 1;
	if (dest != nullptr)
	{
		delete[] dest;
	}
	dest = new char[length];
	strcpy_s(dest, length, source);
}
void mString::input() {
	cout << "Enter string: ";
	if (this->str[0] == '\0')
	{
		cin.getline(this->str, this->size);
	}
	else {
		char line[1000];
		cin.getline(line, 1000);
		strCopy(this->str, line);
	}
}