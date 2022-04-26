#include<bits/stdc++.h>
using namespace std;
typedef pair<char, int> ii;
typedef vector<ii> vii;
map<char,int> m;
map<char,bool> vs;
queue<char> head;
void printArrDFT(vii p)
{
   for(int i=0;i<p.size();i++)
   {
      if(vs[ p[i].first]) continue;
      printf("%c ",p[i].first);
      vs[p[i].first]=true;
   }

} //print city that this city can go
int main()
{
  //vii aList[n];
  vector<vii> AdjList;
  vii v; // v = vector< pair<int,int>>
  AdjList.push_back(v);
  int n;
  printf("Enter number of city : ");
  scanf("%d",&n);
  for(int i=0;i<=n;i++)
  {
    AdjList.push_back(v);
  }
  char st='1';
  int cnt=1;
     printf("Enter . . 0 when finished input (from,to,distance) \n");
     int wt=1;
     char fr='1';
     while(1)
     {
       int s,f;
       printf("Enter path and weight: ");
       cin >> st >> fr >> wt;
       if(st=='.'&&fr=='.'&&wt==0) break;
       auto it = m.find(st);
       if (it == m.end()) { m[st] = cnt; s=cnt; cnt++; head.push(st); }
       else { s=it->second; }
       AdjList[s].push_back(make_pair(fr,wt)); // make_pair(x,y) = {x,y}
        vs[st] = false;
        vs[fr] = false;
     }
 
 for(int i=1;i<AdjList.size();i++)
 {
   if(vs[head.front()]==false)
   {
     printf("%c ",head.front());
     vs[head.front()]=true;
     head.pop();
   }
    printArrDFT(AdjList[i]);
 }
  return 0;
}
/*
9
S A 3
S B 2
S C 5
A G 2
A C 3
B A 4
B D 6
C H 3
C B 4
H A 4
H D 4
G D 4
G E 5
D E 2
D F 3
E F 5
. . 0
*/
