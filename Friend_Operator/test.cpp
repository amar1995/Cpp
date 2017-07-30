#include "Test.h"

void A::setAge(B &obj,int age)
{
    obj.age = age;
}
Integer::Integer(int x,int y)
{
    this->x=x;
    this->y=y;
}
Integer::~Integer()
{

}
void Integer::setX(int x)
{
    this->x=x;
}
void Integer::setY(int y)
{
    this->y=y;
}
Integer Integer::operator+(Integer &sec)
{
    x+=sec.x;
    y+=sec.y;
    return *this;
}
