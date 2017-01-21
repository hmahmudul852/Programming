#include<iostream>
#define max 100
using namespace std;

int main()
{
    int ver;
    cout<<"Enter vertice number: ";
    cin>>ver;
    int ar[max][max]={0};
    for(int i=0;i<ver;i++)
    {
        for(int j=1+i;j<ver;j++)
        {
            if(i!=j)
            {
                printf("Is %d & %d connected? : ",i,j);
                cin>>ar[i][j];
                ar[j][i]=ar[i][j];
            }
        }
    }
    for(int i=0;i<ver;i++)
    {
        for(int j=0;j<ver;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

