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
void mString::operator=(const mString& other)
{
	if (this == &other) {
		return;
	}
	strCopy(this->str, other.str);
}
void mString::input() {
		char line[1000];
		cin.getline(line, 1000);
		strCopy(this->str, line);
}
void mString::input(const char* line) {
		strCopy(this->str, line);
}