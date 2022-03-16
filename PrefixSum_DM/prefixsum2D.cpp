//二维前缀和
#include<iostream>
using namespace std;
const int N=1007;
int arr[N][N],sum[N][N];
int n,m,q;
int main(){
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            sum[i][j]=sum[i-1][j]+sum[i][j-1]+arr[i][j]-sum[i-1][j-1]; //二维前缀和数组
        }
    }
    while (q--)
    {
        int x1,y1,x2,y2;
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        printf("%d\n",sum[x2][y2]-sum[x1-1][y2]-sum[x2][y1-1]+sum[x1-1][y1-1]);
    }
    return 0;
}