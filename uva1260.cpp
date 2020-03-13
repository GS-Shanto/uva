#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
         int c=0;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(ar[j]<= ar[i]){
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
