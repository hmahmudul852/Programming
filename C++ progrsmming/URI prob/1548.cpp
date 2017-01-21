#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector
#include<cstdio>

using namespace std;

int main()
{
    int line;
    cin>>line;
    while(line--)
    {
        int m,a,cou=0;
        vector<int>students;
        vector<int>keep;
        cin>>m;
        while(m--)
        {
            cin>>a;
            students.push_back(a);
            keep.push_back(a);
        }
        sort(students.rbegin(), students.rend());
//        reverse(students.begin(),students.end());
        for(int i=0;i<students.size();i++)
        {
            if(students[i]==keep[i])
                cou++;
        }
        cout<<cou<<"\n";
    }
    return 0;
}
