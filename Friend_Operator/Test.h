#ifndef TEST_H_INCLUDED
#define TEST_H_INCLUDED
#include <string>

using namespace std;
class B;

class A
{
private:
    string name;
public:
   void setAge(B &,int);
   friend void setName(A &,string);
   string getName(){return this->name;};
};
class B
{
    friend class A;
    private:
        int age;
    public:
        int getAge(){return this->age;};
};
class Integer
{
private:
    int x,y;
public:
    Integer(int ,int );
    ~Integer();
    void setX(int );
    void setY(int );
    int getFirst(){return x;}
    int getSecond(){return y;}
    Integer operator+(Integer &);
};
#endif // TEST_H_INCLUDED
