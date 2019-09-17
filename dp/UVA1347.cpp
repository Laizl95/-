#include<bits/stdc++.h>
#define rep(i,x,y) for(int i=x;i<y;++i)
#define per(i,x,y) for(int i=y-1;i>=x;--i)
#define ms(x,y) memset(x,y,sizeof(x))
#define pb(x) push_back(x)
using namespace std;
const int N=1005;
/*�����άƽ����һ�ѵ㣬����x������˳�����������ӵ�һ�����ߵ�
���һ���㣬Ȼ���ٴ����һ�����߻ص�һ���㡣���������յ㣬
ÿ����ֻ����һ�Σ���������·�̺�����Ƕ��٣�*/
double dp[N][N];
double x[N],y[N];
double dis(int i,int j){
  return  sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
}
int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        rep(i,0,n) scanf("%lf %lf",&x[i],&y[i]);
        rep(i,0,n) rep(j,0,i) dp[i][j]=-1;
        dp[0][0]=0;dp[1][0]=dis(1,0);
        rep(i,0,n){
            rep(j,0,i){
                if(dp[i+1][i]==-1 || dp[i+1][i]>dp[i][j]+dis(j,i+1))
                    dp[i+1][i]=dp[i][j]+dis(j,i+1);
                if(dp[i+1][j]==-1 || dp[i+1][j]>dp[i][j]+dis(i,i+1))
                    dp[i+1][j]=dp[i][j]+dis(i,i+1);
            }
        }
        /*dp[1][0]=dis(1,0);
        rep(i,1,n){
            rep(j,0,i-1){
               if(dp[i][j]==-1 || dp[i][j]>dp[i-1][j]+dis(i-1,i))
                    dp[i][j]=dp[i-1][j]+dis(i-1,i);
               if(dp[i][i-1]==-1 || dp[i][i-1]>dp[i-1][j]+dis(j,i))
                    dp[i][i-1]=dp[i-1][j]+dis(j,i);
            }
        }*/
        double ans=-1;
        rep(i,0,n-1)
            if(ans==-1 || dp[n-1][i]+dis(i,n-1)<ans)
                ans=dp[n-1][i]+dis(i,n-1);
        printf("%.2lf\n",ans);
    }
return 0;
}
