#include<bits/stdc++.h>
using namespace std;
  int gcd(int a, int b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}

int main()
{
    int n,c=0;
    cin>>n;
    for(int i=1;i<=n/2;i++){
     for(int j=n;j>=n/2;j--){
        if((i*j/gcd(i,j))==n)
            c++;
     }
    }
     cout<<c;

}
