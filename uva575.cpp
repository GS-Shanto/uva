#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[32];
    while(gets(a) ){
        if(a[0]=='0')
        return 0;
    int l=strlen(a);
    int l1=l;
   // cout<<l<<endl;
    //char *pch;
    int ar[l];
    for(int i=0;i<l;i++){
        ar[i]=(a[i]-48);
    }
    int sum=0;
   for(int i=0;i<l;i++){
    sum+= (ar[i]*(pow(2,l1)-1));
     l1--;
   }
    cout<<sum<<endl;
    }
    return 0;
}
