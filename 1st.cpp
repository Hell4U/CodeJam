#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int k=0;
    while(t--)
    {
        k++;
        int n;
        cin>>n;
        int a[n][n];
        int sum=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(i==j)
                    sum+=a[i][j];
            }
        int rows=0,cols=0;
        bool ok=true;
        for(int i=0;i<n;i++)
        {
            ok=true;
            for(int j=0;j<n;j++)
            {
                for(int q=j+1;q<n;q++)
                    {
                        if(a[i][j]==a[i][q])
                        {
                            rows++;
                            ok=false;
                            break;
                        }
                    }
                if(ok!=true)
                    break;
            }
            
    }
    for(int i=0;i<n;i++)
        {
            ok=true;
            for(int j=0;j<n;j++)
            {
                for(int q=j+1;q<n;q++)
                    {
                        if(a[j][i]==a[q][i])
                        {
                            cols++;
                            ok=false;
                            break;
                        }
                    }
                if(ok!=true)
                    break;
            }
            
    }
    cout<<"Case #"<<k<<":"<<" "<<sum<<" "<<rows<<" "<<cols<<endl;
}
}