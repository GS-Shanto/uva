#include<iostream>
using namespace std;
int main()
{
    int s,b,l,r;
    char c;
    while(cin>>s>>b){
            if(s==0 && b==0){
                return 0;
            }
             int a[s+1]={0};
        for(int i=1;i<=b;i++){
            cin>>l>>r;
        }
        int l1,r1,f1=0,f2=0;
            for(int j=l;j<=r;j++){
            a[j]=1;}
            for(int k=l;k>=1;k--){
             if(a[k]==0){
                l1=k;
                f1=1;
                break;
             }
            }
            for(int k2=r;k2<=s;k2++){
                     if(a[k2]==0){
                r1=k2;
                f2=1;
                break;
             }
            }
           if(f1!=1&&f2!=1){
            cout<<"*"<<" *"<<endl;
           }
           else if(f1==1&&f2!=1){
            cout<<l1<<" *"<<endl;
           }
           else if(f1!=1&&f2==1){
            cout<<"* "<<r1<<endl;
           }
           else{
            cout<<l1<<" "<<r1<<endl;
           }
        cout<<"-"<<endl;
    }

    return 0;
}
