#include<bits/stdc++.h>
using namespace std;

class point{
    public:
        point();
        point(int _x,int _y);//���캯��
        ~point();//��������
        void init(int x,int y);
        void print();
        void moves(int dx,int dy);
    private:
        int x;
        int y;
};
point::point(){

    printf("point--this=%p\n",this);
}
point::point(int _x,int _y){
    x=_x;y=_y;
    printf("chushihua%p\n",this);
}
point::~point(){
    printf("out\n");
}
void point::init(int _x,int _y){
    printf("init:%d %d\n",x,y);
        x=_x;
        y=_y;
}
void point::print(){
 cout<<x<<" "<<y<<endl;
}
int main(){
    //�ռ��Ѿ����䣬������ȫ�����죬Ҫ����˳��
    point a;//a.point()
    a.init(1,2);
    a.print();
    point x[2]={point(2,3),
    point()};

return 0;
}
