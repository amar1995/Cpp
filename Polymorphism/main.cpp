#include <iostream>
#include "farm.h"
using namespace std;

int main()
{
    Dog dog;
    Cat cat;
    Cow cow;
    cout << dog.getVoice() << endl;
    Animal *p = &cat;
    cout << p->getVoice() << endl;

    Animal &p1 = cow;
    cout << p1.getVoice() << endl;
    return 0;
}
