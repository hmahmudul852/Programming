#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t1,t2,t3,t4,t5,sumall,sum1=0,sum2=0,in1=0,in2=0,va1=2,va2=3;
    cin>>t1>>t2>>t3>>t4>>t5;
    sumall=t1+t2+t3+t4+t5;
    int ar[101]={0};
    ar[t1]+=1;
    ar[t2]+=1;
    ar[t3]+=1;
    ar[t4]+=1;
    ar[t5]+=1;
    for(int i=1;i<101;i++)
    {
        if(ar[i]==2)
           in1=i;
        else if(ar[i]>=3)
            in2=i;
    }
    sum1=in1*va1;
    sum2=in2*va2;
    if(sum1>=sum2)
        sumall=sumall-sum1;
    else if(sum2>=sum1)
        sumall=sumall-sum2;

    cout<<sumall<<endl;
    return 0;
}
