#include<iostream>

using namespace std;

int main()
{
    int ver,edg;
    cout<<"Enter vertice number: ";
    cin>>ver;
    cout<<"Enter edge number: ";
    cin>>edg;
    int ar[ver][edg];
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<edg;j++)
        {
            if(i!=j)
            {
                printf("Is %d & %d connected?",i,j);
                cin>>ar[i][j];
            }
        }
    }
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<edg;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
