#include <iostream>
#include <string>
#include "Test.h"
using namespace std;

void setName(A &obj,string name)
{
    obj.name=name;
}
int main()
{
    B objB;
    A objA;
    setName(objA,"Amar");
    objA.setAge(objB,22);
    cout << objA.getName() << endl;
    cout << objB.getAge() << endl;
    Integer objInt1(10,20);
    Integer objInt2(20,20);
    Integer objInt3(30,40);
    Integer sumObj = objInt1+objInt2+objInt3;
    cout << sumObj.getFirst() << " " << sumObj.getSecond() << endl;
    return 0;
}
