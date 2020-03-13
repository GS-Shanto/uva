#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>t;
    while(t--){
    cin>>n;
    int l[10000],h[100000];
    char name[10000][20];
    for(int j=0;j<n;j++){
        cin>>name[j]>>l[j]>>h[j];
    }
    int m,p;
    cin>>m;
    while(m--){
        cin>>p;
        int c=0,mi;
       for(int j=0;j<n;j++){
         if(p>=l[j] && p<=h[j]){
            c++; mi=j;
         }
         if(c>1) break;
       }


     if(c==1){
        cout<<name[mi]<<endl;
     }
     else{
        cout<<"UNDETERMINED"<<endl;
     }

  }
  if(t){
        cout<<endl;
     }
    }
return  0;
}
