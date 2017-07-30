#include <string>
#include <iostream>
#include "interface.h"
using namespace std;
using namespace chk;

int main()
{
    MyFunction *myFunc = new chk::MyFunction("AMAR",21,13);
    chk::MyFunction obj1 = MyFunction("nm",67,89);
    cout << sizeof(obj1) << endl;
    myFunc->display();
    obj1.display();
    delete myFunc;
}
