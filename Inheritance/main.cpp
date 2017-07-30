#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
    Point2D obj;
    obj.Point::setX(10);//Use point type
    Point chk;
    cout << chk.getX() << endl;
    cout << obj.getX() << " " << obj.getY() << endl;
    return 0;
}
