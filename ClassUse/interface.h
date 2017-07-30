#ifndef Interface_H
#define Interface_H
#include <string>
#include <iostream>

using namespace std;
namespace chk
{
class MyFunction
{
private :
    string name;
    int age ;
    int rollNo;
public :
    MyFunction(string name,int age,int rollNo);
    ~MyFunction();
    void display();

};
}

#endif // Interface_H
