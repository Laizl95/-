#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5,inf=1e6+5,mod=19650827;
typedef long long LL;
class task{
public:
   task():x(0),y(0){}
   void operator()(){
     x=1;y=1;
     cout<<x<<" "<<y<<endl;
   }
   void print(){
        cout<<x<<" "<<y<<endl;
   }
int x,y;
};
struct func {
    int& i;
    func(int& i_) : i(i_) {}
    void operator()(){
        for(unsigned j=0 ; j<1000000 ; ++j){
               // do_something(i);// 1 Ǳ�ڷ�����������������
        }
    }
};
//RAII
class thread_guard{
    thread &t;
public:
    thread_guard(thread _t):t(_t){}
    ~thread_guard(){
        if(t.joinable()){
            t.join();
        }
    }
 thread_guard(thread_guard const&)=delete;   // 3
 thread_guard& operator=(thread_guard const&)=delete;
};
void f(){
    /*int some_local_state=0;
    func my_func(some_local_state);
    std::thread t(my_func);
    try {
        do_something_in_current_thread();
    }catch(...){
         t.join();  // 1
         throw;
    }
    t.join();  // 2*/
    int some_local_state=0;
    func my_func(some_local_state);
    std::thread t(my_func);
    thread_guard g(t);
    do_something_in_current_thread();
}

int main(){
    //����join,detach���ܵ����߳����� thread��������terminate()
    //������ȴ��̣߳��ͱ��뱣֤�߳̽���֮ǰ���ɷ��ʵ����ݵ���Ч�ԡ�
    task a;
    thread my_thread(a);
    my_thread.join();
    a.print();

    thread t(&task::print,&a);
return 0;
}
