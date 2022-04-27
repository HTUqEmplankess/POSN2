#include<bits/stdc++.h>
using namespace std;
string x,y;

int T[10000][10000];
int LCS(int lx,int ly)
{
  for(int i=0;i<=lx;i++)
  {
    for(int j=0;j<=ly;j++)
    {
       if(i==0||j==0) T[i][j]=0;
       else if(x[i]==y[i]) T[i][j]=1+T[i-1][j-1];
       else
       {
         T[i][j]= max(T[i-1][j],T[i][j-1]);
       }
    }
  }
  return T[lx][ly];
}
int main()
{
   cin >> x >> y ;
     x = "0" + x;
     y = "0" + y;
   printf("Longest Common Subsequence : %d\n",LCS(x.size(),y.size()));
 return 0;
}
/*
ABACDUTG
ABASDUTGHKL
*/
