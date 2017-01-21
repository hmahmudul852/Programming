#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,s,x,bark,flag=0;
    cin>>t>>s>>x;
    if(t==x)
        cout<<"YES\n";
    else
    {
        for(int i=1;;i++)
        {
            bark=t+(s*i);
            if(bark==x || (bark+1)==x)
            {
                flag=1;
                break;
            }
            else if(bark>x)
                break;
//            cout<<bark<<" "<<bark+1<<endl;

        }
        if(flag==1)
            cout<<"YES\n";
        else if(flag==0)
            cout<<"NO\n";
    }
    return 0;
}
