#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point // parent , super , base class
{
protected:
    int x;
public:
    Point(int =0);
    ~Point();
    void setX(int );
    int getX(){return x;}
};
class Point2D : public Point // derived . child ,subclass
{
protected:
    int y;
public:
    Point2D(int =0,int =0);
    ~Point2D();
    void setY(int );
    int getY(){return y;}
    void setXY(int , int);
    void setX(int );
};

#endif // POINT_H_INCLUDED
