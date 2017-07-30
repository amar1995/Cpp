#include "Point.h"
#include <iostream>

using namespace std;
Point::Point(int x)
{
    this->x = x;
    cout << "First call" << endl;
}
void Point::setX(int x){
    this->x = x;
    cout << "Point type" << endl;
}

Point::~Point(){

}
Point2D::Point2D(int x , int y) : Point(x)
{
    this->y = y;
    cout << "Second call" << endl;
}
void Point2D::setY(int y){
    this->y = y;
}

Point2D::~Point2D(){

}
void Point2D::setXY(int x,int y)
{
    setX(x);
    setY(y);
}
void Point2D::setX(int x){
    this->x = x;//Important used here when object is of same type
    /*
    But use parent setX()
    When obj.Point::setX(5);
    it type changed to Point*/
    cout << "Point2D type" << endl;
}
