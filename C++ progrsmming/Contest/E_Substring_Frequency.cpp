#include<bits/stdc++.h>

using namespace std;

void getZarr(string str, int Z[]);

int searc(string text, string pattern)
{
    string concat = pattern + "$" + text;
    int l = concat.length();

    int Z[l];
    getZarr(concat, Z);

    int cou=0;
    for (int i = 0; i < l; ++i)
    {
        if (Z[i] == pattern.length())
            cou++;
    }
    return cou;
}

void getZarr(string str, int Z[])
{
    int n = str.length();
    int L, R, k;

    L = R = 0;
    for (int i = 1; i < n; ++i)
    {
        if (i > R)
        {
            L = R = i;

            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;

            if (Z[k] < R-i+1)
                 Z[i] = Z[k];

            else
            {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    int t,cs=0;
    scanf("%d",&t);
    while(t--)
    {
        cs++;
        string a,b;
        cin>>a>>b;

        printf("Case %d: %d\n",cs,searc(a,b));
    }
    return 0;
}
