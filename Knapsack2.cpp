#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> t;
vector< vector<int>> dp(100,vector<int>(100,-1));
int W;
int ks(int i,int j)
{
   if(i==0||j==0) return 0;
   if(dp[i][j]==-1)
   {
      if(j<t[i].second) dp[i][j]=ks(i-1,j-1);
      else dp[i][j]=max(ks(i-1,j),(t[i].first)+ks(i-1,j-(t[i].second)));
   }
   return dp[i][j];
}
int main()
{
  printf("Enter number : ");
  int n; scanf("%d",&n);
  t.push_back({0,0});
  for(int i=0;i<n;i++)
  {
     int tm,we;
     printf("#%d : ",i+1);
     scanf("%d %d",&tm,&we);
     t.push_back({tm,we});
  }
  printf("Enter max weight : ");
  int W; scanf("%d",&W);
  printf("Max value : %d",ks(n,W));
  //for(auto it:t) { printf("%d %d\n",it.first,it.second);}
  return 0;
}
///O(1) -> worst case: O(n)
/// การวน push เพื่อจองที่
/*
4
1 1
4 3
5 4
7 5
7
*/
