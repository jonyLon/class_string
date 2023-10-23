#pragma once
#include <iostream>
using namespace std;

class mString
{
private:
	static int count;
	int size = 0;
	char *str = nullptr;
	void strCopy(char*& dest, const char* source);
public:

	mString() : mString(80) {};
	mString(int size) {
		this->str = new char[size];
		this->str[0] = '\0';
		this->size = size;
		this->count++;
	};
	mString(const char* line) {
		strCopy(this->str, line);
		this->count++;
	};
	~mString() {
		if (this->str != nullptr) {
			delete[] this->str;
			this->count--;
		}
	}
	void input();
	inline void display() const{
		cout << this->str << endl;
	}
	inline const int getCount() const{
		return this->count;
	}
};

