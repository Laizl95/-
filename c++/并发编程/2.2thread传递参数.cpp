#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5,inf=1e6+5,mod=19650827;
typedef long long LL;
/*thread�Ĺ��캯������֪����
���캯�����Ӻ����ڴ��Ĳ�������,��äĿ�Ŀ������ṩ�ı���*/
class X{
public:
    void do_work(int){

    }
};
X my_x;
int num(0);
thread t(&X::do_work,&my_x);

/*thread�ṩ�Ĳ��������ƶ��������ܿ���*/
void process_big_object(std::unique_ptr<big_object>);
std::unique_ptr<big_object> p(new big_object);
p->prepare_data(42);
std::thread t(process_big_object,std::move(p));

/*thread ʵ������ unique_ptr ������ռ��һ
����̬���������Ȩ����������ռ��������Դ��ÿ��ʵ�����������һ��ִ���̡߳�
ִ���̵߳�����Ȩ�����ڶ��thread ʵ���л���ת�ƣ�����������thread ʵ����
���ƶ��Ҳ��ɸ����ԡ����ɸ��Ʊ���֤����ͬһʱ��㣬һ��thread ʵ��ֻ�ܹ���
һ��ִ���߳� */

