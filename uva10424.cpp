#include<bits/stdc++.h>
int main()
{
    char a[25],b[25];
   while(gets(a) ){
    gets(b);
    //strupr(a);
    //strupr(b);
    //cout<<a;
    int sum1=0,sum2=0;
    for(int i=0;a[i]!='\0';i++){
    if(a[i]>='A' &&a[i]<='Z'){
        sum1 += a[i]-64;
    }
    else if(a[i]>='a' && a[i]<='z')
        sum1 += a[i]-96;
    }
     for(int i=0;b[i]!='\0';i++){
    if(b[i]>='A' &&b[i]<='Z'){
        sum2 += b[i]-64;
    }
    else if(b[i]>='a' && b[i]<='z')
     sum2 += b[i]-96;

    }
    //cout<<sum;
    int s1,s2;
    while(sum1>=10){
            s1=0;
    while(sum1 !=0){
            s1 +=(sum1%10);
           sum1/=10;
    }
       sum1=s1;

    }
        while(sum2>=10){
             s2=0;
     while(sum2 !=0){
           s2 += (sum2%10);
           sum2 /=10;
     }
           sum2=s2;
        }
    float ans;
    if(s1>s2){
        ans =float(s2)/float(s1)*100;
    }
    else{
        ans=float(s1)/float(s2) *100;
    }
    printf("%.2f %%\n",ans);
}
 return 0;
}
