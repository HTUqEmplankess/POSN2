//{10,3,8,7,1} k=12, ...
#include<bits/stdc++.h>
using namespace std;
int sumArr(vector<int> v)
{
  int sum=0;
  int si=v.size();
  for(int j=0;j<si;j++) sum+=v[j];
  return sum;
}
void printArr(vector<int> v)
{
  int si=v.size();
  for(int j=0;j<si;j++) printf("%d ",v[j]);
  printf("\n");
}
int subsetSum(vector<int> s,int k,vector<int> t,int i)
{
  int ch=0;
  if(sumArr(t)==k)
      {
           printArr(t);
           ch=1;
      }
  else if (i==s.size()) return 0;
  else
   {
     if(subsetSum(s,k,t,i+1)) ch=1;
     t.push_back(s[i]);
     if(subsetSum(s,k,t,i+1)) ch=1;
     t.pop_back();
   }
  return ch;
}
int main()
{
  vector<int> s;
  printf("Enter vector size : ");
   int q; scanf("%d",&q);
    printf("Enter vector : ");
   int x; for(int i=0;i<q;i++) { scanf("%d",&x); s.push_back(x);}

  vector<int> t;
  printf("Enter k : ");
  int k; scanf("%d",&k);
  int ch;
  ch=subsetSum(s,k,t,0);
  printf("Sum of Subset = k : %d ",ch);
//  s.size()
//  s.push_back(11) //ต่อท้าย
//  s.pop_back(11) // ป็อปตัวท้ายออก

  return 0;
}
