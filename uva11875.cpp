#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int i=1;
    while(i<=t){
     int n;
     cin>>n;
     int a[n];
     for(int j=0;j<n;j++){
        cin>>a[j];
     }
    /* sort(a,a+n);
     for(int j=0;j<n;j++){
        cout<<a[j];
     } */
     cout<<"Case "<<i<<": "<<a[(n-1)/2]<<endl;
     i++;
    }
    return 0;
}
