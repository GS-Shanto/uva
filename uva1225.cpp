#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    int t;
    cin>>t;
    while(t>0){
    cin>>n;
  int    ar[10]={0};
   for(int i=1;i<=n;i++){
    int j=i;
    while(j!=0){
         int k;
        k=j%10;
        ar[k]++;
        j/=10;
    }
   }
    for(int i=0;i<9;i++){
        cout<<ar[i]<<" ";
    }
    cout<<ar[9]<<endl;
    t--;

}
return 0;
}
