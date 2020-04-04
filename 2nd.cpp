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
        string s;
        cin>>s;
        string ans="";
                        
        for(int q=0;q<(s[0]-'0');q++)
            ans+='(';
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i+1]-'0'<s[i]-'0')
            {
                ans+=s[i];
                //cout<<ans<<endl;
                for(int q=0;q<abs(s[i+1]-s[i]);q++)
                    ans+=')';
            }
            else
            {
                ans+=s[i];
                for(int q=0;q<abs(s[i+1]-s[i]);q++)
                    ans+='(';
            }
        }
        //cout<<ans<<endl;
        ans+=s[s.length()-1];
        for(int i=0;i<s[s.length()-1]-'0';i++)
            ans+=')';
        cout<<"Case #"<<k<<":"<<" "<<ans<<endl;
    }
    
}