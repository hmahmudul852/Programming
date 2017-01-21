#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int ar[5][5],r,c;
    for(r=0;r<5;r++)
        for(c=0;c<5;c++)
            cin>>ar[r][c];

    int moves=0,flag=1,row,col;
    for(r=0;r<5;r++)
    {
        for(c=0;c<5;c++)
        {
            if(ar[r][c]==1 || flag==1)
            {
                row=r;
                col=c;
                flag=0;
            }
        }
    }

    moves=abs(2-row)+abs(2-col);

    cout<<moves<<"\n";
    return 0;
}
