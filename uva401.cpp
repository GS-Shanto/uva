#include<stdio.h>
#include<string.h>
    int main(){
    char a[200],b[200];
    char a1[]={'A','E','H','I','J','L','M','O','S','T','U','V','W','X','Y','Z','1','2','3','5','8','0','o','0'};
    char b1[]={'A','3','H','I','L','J','M','O','2','T','U','V','W','X','Y','5','1','S','E','Z','8','0','0','o'};
    while(gets(a) !=EOF){
    int i=0,j,k,c;
    int l=strlen(a);
    for( j=l-1;j>=0;j--){
           b[i++]=a[j];
    }
    b[i]='\0';
    int co=0;
    for(int T=0;T<l;T++){
        if(a[i]==b[i])
            co++;
    }
    c=0;
    for(k=0;k<l;k++){
    for(int t=0;t<=23;t++){
        if((a[k]==a1[t])&&(b[k]==b1[t])){
            c++;
            break;
        }
    }
    }
    if(co == l&& c == l){
        printf("-- is a mirrored palindrome.\n");
    }
   else if(co == l&& c != l){
     printf("-- is a regular palindrome.\n");
   }
   else if(co != l&& c == l){
     printf("-- is a mirrored string.\n");
   }
    else{
        printf("-- is not a palindrome.\n");
    }
    }
    return 0;
    }
