#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    
    vector<int>vc;
    
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        vc.push_back(x);
        
    }
    
    
    long local=vc[0];
    long global=vc[0];
    
    for(int i=1;i<n;i++)
    {
     local=max(vc[i],local+vc[i]);
     global=max(local,global);
    }
    
  cout<<global<<endl;



return 0;

}