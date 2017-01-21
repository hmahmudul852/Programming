#include<bits/stdc++.h>

using namespace std;

int main()
{
    int line;
    cin>>line;
    while(line--)
    {
        int a;
        cin>>a;
        vector<int> ar;
        while(a!=0)
        {
            int b;
            b=a%2;
            a=a/2;
            ar.push_back(b);
        }
        for(int i=0;i<ar.size();i++)
        {
            if(ar[i]==1)
            {
                cout<<i;
                if(a!=ar.size()-1)
                    cout<<" ";
            }

        }
        cout<<endl;

    }
    return 0;
}
