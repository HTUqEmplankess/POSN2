///Top down
#include<bits/stdc++.h>
using namespace std;
long long dp[10000][10000];
long long C(int n,int k)
{
   if(n==k||k==0) return 1;
   if(n<k||k<0) {printf("Invalid Input\n"); return 0; }
   if(dp[n][k]==0) dp[n][k]=C(n-1,k)+C(n-1,k-1);
return dp[n][k];
}
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  printf("C = %lld\n",C(n,k));
  return 0;
}
