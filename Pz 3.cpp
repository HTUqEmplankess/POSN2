#include<bits/stdc++.h>
using namespace std;
   int a[1000][1000];
   int dp[1000][1000];
int  maxpath(int r,int c)
{
     int mx=0;
    for(int i=0;i<r;i++)
     {for(int j=1;j<=c;j++)
       {
         if(i==0) dp[i][j]=a[i][j];
         else
         {
           dp[i][j]=a[i][j]+max({dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1]});
         }
         if(i==r-1)
         {
             if(dp[i][j]>mx) mx=dp[i][j];
         }
        // printf("%d ",dp[i][j]);
       } //printf("\n");
     }
    return mx;
}

int main()
{
   int r,c;
   scanf("%d %d",&r,&c);
   for(int i=0;i<r;i++)
    for(int j=1;j<=c;j++) { scanf("%d",&a[i][j]); }
//for(int i=0;i<=r;i++)
//  { for(int j=0;j<=c+1;j++)
//     printf("%d ",a[i][j]);
//     printf("\n");
//  }
   printf("Max Path : %d\n",maxpath(r,c));
   return 0;
}
/*
5 4
34 21 22 34
45 70 42 65
25 62 15 26
15 19 32 24
30 60 50 80
*/
