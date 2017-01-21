#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int h,m;
        scanf("%d:%d",&h,&m);
        if(m==0)
        {
            if(h==12) cout<<"12:00"<<endl;
            else if(h==11) cout<<"01:00"<<endl;
            else if(h==10) cout<<"02:00"<<endl;
            else if(h==9) cout<<"03:00"<<endl;
            else if(h==8) cout<<"04:00"<<endl;
            else if(h==7) cout<<"05:00"<<endl;
            else if(h==6) cout<<"06:00"<<endl;
            else if(h==5) cout<<"07:00"<<endl;
            else if(h==4) cout<<"08:00"<<endl;
            else if(h==3) cout<<"09:00"<<endl;
            else if(h==2) cout<<"10:00"<<endl;
            else if(h==1) cout<<"11:00"<<endl;
        }
        else
        {
            if(h==12) cout<<"11:";
            else if(h==11) cout<<"12:";
            else if(h==10) cout<<"01:";
            else if(h==9) cout<<"02:";
            else if(h==8) cout<<"03:";
            else if(h==7) cout<<"04:";
            else if(h==6) cout<<"05:";
            else if(h==5) cout<<"06:";
            else if(h==4) cout<<"07:";
            else if(h==3) cout<<"08:";
            else if(h==2) cout<<"09:";
            else if(h==1) cout<<"10:";

            if(m>50) cout<<'0'<<60-m<<endl;
            else cout<<60-m<<endl;

        }
    }
    return 0;
}
