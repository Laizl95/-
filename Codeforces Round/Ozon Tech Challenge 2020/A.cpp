#include<bits/stdc++.h>
#define rep(i,x,y) for(int i=x;i<y;++i)
#define per(i,x,y) for(int i=y-1;i>=x;--i)
#define ms(x,y) memset(x,y,sizeof(x))
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define pii pair<int,int>
using namespace std;
const int N=2e5+5,inf=1e9+5;
typedef long long LL;

int n,m;
int a[N],b[N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
      scanf("%d",&n);
      rep(i,0,n) scanf("%d",&a[i]);
      rep(i,0,n) scanf("%d",&b[i]);
      sort(a,a+n);
      sort(b,b+n);
      rep(i,0,n) printf("%d ",a[i]);puts("");
      rep(i,0,n) printf("%d ",b[i]);
      puts("");

    }
return 0;
}
