#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i=1;
    double  r,n;
    while(cin>>r>>n){
    if(r==0 && n==0){
        return 0;
    }
       double c=(r-n)/n;
       cout<<c<<endl;
       if(c<=26){
       cout<<"Case "<<i<<": "<<int(ceil(c))<<endl;}
       else{
        cout<<"Case "<<i<<": "<<"impossible"<<endl;
       }
    i++;
    }
    return 0;
}
