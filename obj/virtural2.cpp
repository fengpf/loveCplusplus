//
// Created by fpf on 2019-12-04.
//

//class 类名{//类体
//    //virtual 返回类型 函数名(形参列表)// 虚函数
//      ...
//};

#include <iostream>
using namespace std;

class Base{
    public:virtual void print(){
        cout<<"Base"<<endl;
    }
};

class Derived:public Base{
    public:void print(){
        cout<<"Derived"<<endl;
    }
};

// pf 指针指向基类成员函数的指针
void display(Base *p, void(Base::*pf)()){
    (p->*pf)();//p指向的对象
}

int main(){
      Derived d;
      Base b;

      display(&d, &Base::print);

      display(&b, &Base::print);

      return 0;
}