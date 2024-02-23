#include <bits/stdc++.h>
using namespace std;

vector<int>v(200010,0);
int sum(int p)
{
    int a=0;
    while(p>0)
    {
        a=a+(p%10);
        p=p/10;
    }
    return a;
}
      int main()
      {
          for(int i=1;i<200010;i++)
          {
              v[i]=sum(i)+v[i-1];
          }
          int t;
          cin>>t;
          while(t--)
          {
              int p;
              cin>>p;
              cout<<v[p]<<endl;
          }
          return 0;
     }
