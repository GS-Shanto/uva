#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000],f=1;
    while(gets(a)){
      for(int i=0;a[i];i++)
      {
          if(a[i]=='\"'){
       if(f==1)
        {
            printf("``");
        }
        else{
            printf("''");
        }
        f=1-f;
       }
       else{
        putchar(a[i]);
       }
    }

puts("");
}
   return 0;
}
