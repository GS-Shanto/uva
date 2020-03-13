#include<bits/stdc++.h>
using namespace std;
int main()
{       int t=0,n;
    while(cin>>n){
            if(n==0){
                return 0;
            }
        int  ar[n];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        t++;
        int m;
        cin>>m;
        int b[m];
        for(int j=0;j<m;j++){
            cin>>b[j];
        }
        cout<<"Case "<<t<<":"<<endl;
        for(int i=0;i<m;i++){
                int m=10000000,ans;
             for(int j=0;j<n;j++){
                for(int k=j+1;k<n;k++){
                    int x=ar[j]+ar[k];
                    int y=abs(x-b[i]);

                if(y<m){
                         m=y;
                         ans =x;
                    }
                }
             }
             cout<<"Closest sum to "<<b[i]<<" is "<<ans<<"."<<endl;

        }

    }
    return 0;
}
