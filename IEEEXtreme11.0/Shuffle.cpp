#include<bits/stdc++.h>
#define rep(i,x,y) for(int i=x;i<y;++i)
#define per(i,x,y) for(int i=y-1;i>=x;--i)
#define ms(x,y) memset(x,y,sizeof(x))
#define pb(x) push_back(x)
using namespace std;
const int N=1005;

//��n����ͥ��ÿ����ͥ��Ҫ������������ͥ���Ѿ����޹��Ĳ����ټ��ޡ�
//��������ͥ�����ټ�����������ͥ������Ҫȥ�Ƶꡣ����Ҫס�Ƶ��ͥ����Сֵ

int edge[N][N],f[N];
bool used[N];
void solve(char s[],int u){
    //puts(s);
    int x=0,len=strlen(s)-1;
   // printf("len=%d\n",len);
    rep(i,0,len+1){
        if(s[i]==' '|| i==len){
           // cout<<x<<endl;
            edge[u][x]=0;
            x=0;
        }else x=x*10+s[i]-'0';
    }
}
//�������㷨
bool finds(int u,int n){//uΪ��ǰ����ƥ������Ԫ��
       for (int v=0;v<n;++v){//ɨ���ұ�ÿ��Ԫ��v
           if (edge[u][v]==1 && used[v]==false){
               // line[u][v]==true��ʾԪ��u��v֮�������ߣ�
               //used[v]��ʾ���Ԫ�ص����Ƿ��й�Ҫ����ƥ��ģ���������ʡ��һЩʱ��

           used[v]=true;
           if (f[v]==-1 || finds(f[v],n)){   //f[v]��ʾvԪ����ƥ���Ԫ��
             //f[v]==0��ʾ��Ԫ����δƥ�� find(f[v])��ȥ�����ܷ�ı�ƥ��jԪ�ص�Ԫ�ص�ƥ�䣨������ǰƥ��j��Ԫ��x�ܷ�ƥ����һ��Ԫ�أ�
            f[v]=u;
            return true;
                }
            }
       }
     return false;
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        getchar();
        char s[N];
        rep(i,0,n) {f[i]=-1;rep(j,0,n) edge[i][j]=(i!=j);}
        rep(i,0,n){
           //cin.getline(s,N-1);
            fgets(s,N,stdin);
            solve(s,i);
        }
        //rep(i,0,n) {rep(j,0,n) printf("%d",edge[i][j]);puts("");}
        int ans=0;
        rep(i,0,n){
            rep(j,0,n) used[j]=false;
            if(finds(i,n)) ans+=1;
        }
        printf("%d\n",n-ans);
    }
return 0;
}
