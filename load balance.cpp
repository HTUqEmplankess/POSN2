#include<bits/stdc++.h>
using namespace std;
void printArr(vector<int> p)
{
   for(int i=0;i<p.size();i++) printf("%d",p[i]);
   printf("\n");
}
int main()
{
  int n,s;
  printf("Enter chamber number : ");
  scanf("%d",&n);
  printf("Enter speciment number : ");
  scanf("%d",&s);
  vector<int> v;
  for(int i=0;i<s;i++)
  {
     int x;
     scanf("%d",&x);
     v.push_back(x);
  }
  sort(v.begin(),v.end());
 // printArr(v);
  while(2*n>s++)
  {
    v.insert(v.begin(),0);
  }
  //printArr(v);
  int p=(v.size()+1)/2;
  for(int i=0;i<p;i++)
  {
    if(i==p-i) printf("%d ",v[i]);
    else printf("Chamber%d : %d \n",i+1,v.front()+v.back());
  }

  return 0;
}
