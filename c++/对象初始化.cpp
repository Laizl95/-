#include<bits/stdc++.h>

using namespace std;

//new int[10] delete[] p��[]��ʾ���ն���ռ�
//�ȵõ��ռ�,Ȼ������ʼ��
//������,Ȼ����տռ�
/*���ر���
malloc��̬�صõ�һ���ڴ�
C++�����������µ����������̬�����ڴ�
new Stash
new ���ʱ�򣬻����ռ䲢�ҵ��ù��캯��
new int;
new Stash;
new int[10];
�������Ȼ�з���ֵ��
delete
delete p;
delete[] p;
�ȵ����������������ͷſռ䡣
int* psome = new int[10];���ؿ�ĵ�һԪ�صĵ�ַ��
delete [] psome;��������еĶ��������������
int *p=new int; // ����ջ����Ѱ��һ����ʵĿռ䣬Ȼ��Pָ������ռ䣬Ȼ�����һ�ű��¼���ַ���ֽڴ�С������ p �� 4BYTE��Ȼ������μ�¼��̬����Ķ�����
�ڲ����ݱ�
int *a=new int[10];
Student *q=new Student();
Student *r=new Student[10];
delete p;// �����ڼ�¼���в���p��ȡ�õ�ַ֪���ж��Ȼ��ȥɾ���ռ䡣
��� a++; delete[] a;��ôϵͳ�ڱ������Ҳ�������ѵ�ַ
delete q; //��������Ȼ����տռ�
delete r; // ��Ϊû�з����ţ���ô�ռ������ջأ�����������ֻ�����һ������
this��ָ������ָ��
TIPS for new and delete
����Ҫ��deleteȥ�ͷ�newû�з���Ŀռ�
����Ҫ�ͷ�����ͬһ�ռ�
���ͷ�NULLָ��ָ��Ŀռ��ǰ�ȫ�ģ��������κ����飬�������������Ϊ������Ĵ����Щ
��������Ҫ�ɶԳ���
�ڴ�й©�ǲ��ܴ��ڵ�*/

class A{
private:
    int i;
    int *p;
public:
    A(){i=0;cout<<"A::A()"<<endl;}
    ~A(){if(p) delete p;cout<<"A::~A(),i="<<i<<endl;}
    void set(int _i){i=_i;}
    void f(){p= new int;cout<<"hello";}
};

int main(){

    A* p=new A[10];
    for(int i=0;i<10;++i) p[i].set(i);
    delete[] p;
return 0;

}
