
#include<bits/stdc++.h>
using namespace std;
string x,y;
int T[10000][10000];
int LCS(int lx,int ly)
{
  if(lx==0||ly==0) return 0;
  else if (x[lx]==y[lx])
  {
    return (1+LCS(lx-1,ly-1));
  }
  return max(LCS(lx-1,ly),LCS(lx,ly-1));

}
int main()
{
   cin >> x >> y ;
//     x = "0" + x;
//     y = "0" + y;
     int as=LCS(x.size(),y.size());
   printf("Longest Common Subsequence : %d\n",as);

 return 0;
}
/*
ASDFGHJK
ASDVBGHJK

ANALYSIS
ALGORITHMS
*/
