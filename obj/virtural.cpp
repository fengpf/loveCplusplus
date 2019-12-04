//
// Created by fpf on 2019-12-04.
//

//class 类名{//类体
//    //virtual 返回类型 函数名(形参列表)// 虚函数
//      ...
//};

#include <iostream>
using namespace std;

class Point{
    double x,y;
    public:
    Point(double x1=0, double y1=0):x(x1),y(y1){}

    virtual double area(){//虚函数
        return 0;
    }
};

class Circle:public Point{
    double r;//半径
    public:
    Circle(double x, double y, double r1):Point(x,y),r(r1){}

    virtual double area(){//派生类的虚函数， virtual 可以不加
        return 3.14*r*r;
    }
};

int main(){
  Point a(2.5, 2.5);
  Circle c(2.5,2.5,1);

  Point *pc=&c;

  cout<<"Circle area="<<pc->area()<<endl;//动态联编

  cout<<"Circle area="<<pc->Point::area()<<endl;//静态联编

    return 0;
}