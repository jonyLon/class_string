#include <iostream>
#include "String.h"
using namespace std;


int main()
{
    mString line = mString();
    line.input();
    line.display();

    mString line2 = mString("Text entered");
    line2.input();
    line2.display();
    mString line1 = mString("Text entered");
    line1.display();
    cout << line1.getCount() << endl;
}

