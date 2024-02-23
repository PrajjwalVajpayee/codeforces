#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;vector<int>a,b;
        for(int i=0;i<n;i++)
        {
            int tt;
            cin>>tt;
            a.push_back(tt);
        }
        for(int i=0;i<m;i++)
        {
           int ttt;
           cin>>ttt;
           b.push_back(ttt);
        }
        vector<int>va,vb,ans;
        for(auto i:a)
        {
            if(i<=k&&find(va.begin(), va.end(), i) == va.end())
            {
                va.push_back(i);
            }
        }
        for(auto i:b)
        {
            if(i<=k&&find(vb.begin(), vb.end(), i) == vb.end())
            {
                vb.push_back(i);
            }
        }
        int te1=0,te2=0;
        if(va.size()<k/2||vb.size()<k/2)
        {cout<<"NO"<<endl;
        continue;}
        if(va.size()<vb.size())
        {
            while(te1<k/2)
            {
                ans.push_back(va[te1]);
                te1++;
            }
            int l1=1;
            for(int i=0;i<vb.size();i++)
            {
                if(l1>k/2)
                break;
                if(find(ans.begin(), ans.end(), vb[i]) == ans.end())
                {
                    ans.push_back(vb[i]);
                    l1++;
                }
            }
        }
        else
        {
            while(te2<k/2)
            {
                ans.push_back(vb[te2]);
                te2++;
            }
            int l1=1;
            for(int i=0;i<va.size();i++)
            {
                if(l1>k/2)
                break;
                if(find(ans.begin(), ans.end(), va[i]) == ans.end())
                {
                    ans.push_back(va[i]);
                    l1++;
                }
            }
        }
        sort(ans.begin(),ans.end());
        vector<int>ans1;
        for(int i=1;i<=k;i++)
        ans1.push_back(i);
        for(auto i:ans)
        cout<<i<<" ";
        cout<<endl;
        if(ans==ans1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
   return 0;
}