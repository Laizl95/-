#include<bits/stdc++.h>
#define rep(i,x,y) for(int i=x;i<y;++i)
#define per(i,x,y) for(int i=y-1;i>=x;--i)
#define ms(x,y) memset(x,y,sizeof(x))
#define pb(x) push_back(x)
using namespace std;
const int N=25;
int a[N],dp[N][2];
//��ǰλΪ1�����������:1.��ǰλ�����ܹ��ж��ٸ��� 2.��ǰλ�������1�ĸ���
//��ǰλΪ0���ǵ�ǰλ�������1�ĸ���
struct node{
 int tmp_1,tmp;
};
node solve(int p,int limit){
    node cnt;
    if(p==-1){
        cnt.tmp=1;cnt.tmp_1=0;
        return cnt;
    }
    if(!limit && dp[p][1]!=-1){
        cnt.tmp=dp[p][1];
        cnt.tmp_1=dp[p][0];
        return cnt;
    }
    int tmp_1=0,tmp=0,u=limit?(a[p]+1):10;
    rep(i,0,u){
        node t=solve(p-1,limit&(i==a[p]));
        //cout<<p<<" "<<pre<<" "<<i<<" "<<t<<endl;
        tmp+=t.tmp;
        tmp_1+=t.tmp_1;
        if(i==1) tmp_1+=t.tmp;
    }
    if(!limit) dp[p][0]=tmp_1,dp[p][1]=tmp;
    cnt.tmp=tmp;cnt.tmp_1=tmp_1;
    return cnt;
}
int main(){
    //freopen("d://input.txt","r",stdin);
    //freopen("d://output2.txt","w",stdout);
    int n;
    while(scanf("%d",&n)!=EOF){
        int x=n,p=0;
        ms(dp,-1);
        while(n){
            a[p++]=n%10;
            n/=10;
        }
        int ans=solve(p-1,1).tmp_1;
        printf("%d\n",ans);
    }
return 0;
}
