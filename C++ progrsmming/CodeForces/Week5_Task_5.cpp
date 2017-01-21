#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main()
{
    int team,cou=0,keep,three=0;
    double sum=0;
    cin>>team;
    vector<int> stu;

    while(team--)
    {
        cin>>keep;
        stu.push_back(keep);
    }
    sort(stu.begin(),stu.end());

    for(int i=0;i<stu.size();i++)
    {
        if(stu[i]==3)
        {
            cou++;
            three++;
            stu[i]=0;
        }
    }

    for(int i=0;i<three;i++)
        if(stu[i]==1)
                stu[i]=0;

    for(int i=0;i<stu.size();i++)
        sum+=(double)stu[i];

    sum=sum/4.00;
    sum=ceil(sum);
    cou+=sum;
    cout<<cou<<endl;
    return 0;
}
