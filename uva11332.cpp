 #include<bits/stdc++.h>
 using namespace std;
 int main(){
 long long int n;
    while(cin>>n){
        if(n==0)
            break;
        long long int t=0;
        while(1){
        while(n!=0){
             t+=n%10;
        n/=10;
        }
        if(t<10)
            break;
        else{
            n=t;t=0;
        }
        }
        cout<<t<<endl;
    }
 }
