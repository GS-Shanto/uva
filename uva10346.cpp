#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(cin>>n>>k){
  int c=n;
   while(n>=k){
        c+=n/k;
      n=(n/k)+(n%k);

   }
   cout<<c<<endl;
    }
    return 0;
}
