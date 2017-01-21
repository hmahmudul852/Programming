
#include<bits/stdc++.h>
using namespace std;
 
int main() {
 
    string a, b;
    while(cin>>a) {
        string temp_digit;
 
        int i=0;
        while( i<a.size() ){
            if( isdigit(a[i]) ) temp_digit+=a[i];
            else{
                b = b + (temp_digit.size() ? to_string(stoi(temp_digit)+1) : "" )+ a[i];
                temp_digit="";
            }
            i++;
        }
        if(temp_digit.size()) b+=to_string(stoi(temp_digit)+1);
        b+=" ";
    }
 
    cout << b <<"\n";
}
