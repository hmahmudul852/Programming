#include<bits/stdc++.h>
using namespace std;

int main()
{
    int line,len;
    scanf("%d",&line);
    string dai;
    while(line--)
    {
        cin>>dai;
        dai.erase(remove(dai.begin(), dai.end(), '.'), dai.end());
        int cou=0;
        stack<char>keep;
        for(int i=0;i<dai.size();i++)
        {
            if(dai[i]=='<')
                keep.push(dai[i]);
            else if(dai[i]=='>' && !keep.empty())
            {
                keep.pop();
                cou++;
            }
        }
        printf("%d\n",cou);
    }

    return 0;
}
