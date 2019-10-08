#include<bits/stdc++.h>
#define rep(i,x,y) for(int i=x;i<y;++i)
#define per(i,x,y) for(int i=y-1;i>=x;--i)
#define ms(x,y) memset(x,y,sizeof(x))
#define pb(x) push_back(x)
using namespace std;
const int N=2*1e5+5;
typedef long long LL;
int a[N],sum[N],b[N];
int solve(int l,int r,int x,int v[]){

        while(l<=r){
            int mid=l+r>>1;
            if(v[mid]<x) l=mid+1;
            else if(v[mid]==x) return mid;
            else r=mid-1;
        }
        return l;
}
int get(int x){
    int ans=0;
    while(x){
        x/=10;
        ans+=1;
    }
    return ans;
}

int main(){
    //printf("%d\n",calc(9));
    int t,p=1;
    while(1){
        a[p]=get(p)+a[p-1];
        sum[p]=sum[p-1]+a[p];
        if(sum[p]>1e9) break;
        p+=1;
    }
   // printf("%d\n",p);
   // rep(i,1,40) printf("%d ",sum[i]);puts("");
    //rep(i,1,40) printf("%d ",a[i]);
    scanf("%d",&t);
    while(t--){
        int x;
        scanf("%d",&x);
         int l=solve(1,p-1,x,sum);//�ڵڼ�������
         //printf("%d ",x-sum[l-1]);
         int r=solve(1,p-1,x-sum[l-1],a);//�ڸ����ĸ�����
         //printf("%d\n",x-sum[l-1]-a[r-1]);������ֵڼ���
         int goal=x-sum[l-1]-a[r-1];
        // cout<<goal<<" "<<r<<endl;
         vector<int> ans;
         while(r){
           ans.pb(r%10);
           r/=10;
         }
         reverse(ans.begin(),ans.end());
         rep(i,0,ans.size()) if(i+1==goal) printf("%d\n",ans[i]);
    }
return 0;
}
