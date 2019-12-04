//
// Created by fpf on 2019-12-04.
//

#include "iostream"

using namespace std;

class Base{
public:
    Base(){};

    virtual  ~Base(){};
    virtual void fun() {
        cout<<"in class Base! "<<endl;
    }
};

class Derived2 : public Base{
public:
    Derived2();
    ~Derived2(){
        cout<<"the destructor of class Derived!"<<endl;
    }

    void fun(){
        cout<<"in class Derived!"<<endl;
    }
};

int main(){
    Base *pTest = new Derived2;
    pTest->fun();//调用派生类的fun
    delete pTest;//调用派生类的析构函数
    return 0;
}
