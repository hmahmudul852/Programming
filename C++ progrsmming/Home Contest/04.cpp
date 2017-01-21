#include<bits/stdc++.h>

using namespace std;

int main()
{
    int line;
    cin>>line;
    while(line--)
    {
        int a,b;
        vector<int> ar;
        cin>>a;
        while(a--)
        {
            cin>>b;
            ar.push_back(b);
        }
        sort(ar.begin(),ar.end());
        for(int i=0;i<ar.size();i++)
        {
            cout<<ar[i];
            if(i!=ar.size()-1)
                cout<<" ";
        }

        cout<<endl;
    }
    return 0;
}
