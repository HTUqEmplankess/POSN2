///Bottom Up
#include<bits/stdc++.h>
using namespace std;
 /// Make 2D conta...
vector< vector<int>> ct;
vector<int> v;
long long C(int n,int k)
{
   if(n<k||k<0) {printf("Invalid Input\n"); return 0; }
   for(int i=0;i<=n;i++)
   {
      for(int j=0;j<=k;j++)
      {
          if(i==j||i==0||j==0) ct[i].push_back(1);
          else if(j<i)
          {
             int x = ct[i-1][j-1]+ct[i-1][j];
             ct[i].push_back(x);
          }
          else  ct[i].push_back(-1);
      }

   }
   return ct[n][k];
}
int main()
{
  int n,k;
  scanf("%d %d",&n,&k);
  for(int i=0;i<=n;i++) ct.push_back(v);
  printf("C = %lld\n",C(n,k));
  return 0;
}
