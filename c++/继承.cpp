#include<bits/stdc++.h>

using namespace std;
//��������ø���Ĺ�����������Ա��������˽�б�������ֱ�ӷ���
//protected ֻ���������������
class A{
public:
    A():i(0){cout<<"A::A()"<<endl;}
    ~A(){cout<<"A::~A()"<<endl;}
    void print(){cout<<"A::f()"<<i<<endl;}
    //void sets(int ii){i=ii;}
protected:
    void sets(int ii){i=ii;}
private:
    int i;
    //void sets(int ii){i=ii;}
};

class B : public A{
public:
    void f(){
        sets(20);
        print();
        //i=30;
    }
};
int main(){
    B b;
    b.sets(10);
    b.print();
    b.f();
    return 0;
}
