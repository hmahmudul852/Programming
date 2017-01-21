#include<iostream>
using namespace std;

int main()
{
    int room,cou=0;
    cin>>room;
    while(room--)
    {
        int peo,seat;
        cin>>peo>>seat;
        if((seat-peo)>=2)
            cou++;
    }
    cout<<cou<<"\n";
    return 0;
}
