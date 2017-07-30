
#include <string>
#include <iostream>
#include "interface.h"
using namespace std;

chk::MyFunction::MyFunction(string name,int age,int rollNo)
{
    this->name=name;
    this->age= age;
    this->rollNo = rollNo;
}
chk::MyFunction::~MyFunction()
{
}
void chk::MyFunction::display()
{
    cout << name << " has age " << age << " and his roll no is " << rollNo <<  endl;

}

