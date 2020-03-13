#include<bits/stdc++.h>
using namespace std;
int main ()
{
  char str[100];
  int c=0,co=0,i;
  char st[100];
  strcpy(st,str);
  while( gets(str)){
  for(i=0;str[i]!='\0';i++){
    if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) || (str[i]>=48 && str[i]<=57)){

  }
  else{
    str[i]=' ';
  }
  }
  for(int j=0;str[j]!='\0';j++){
    if(str[j]==' ')
        c++;
  }
  for(int k=0;st[k]!='\0';k++){
    if(st[k]==' ')
        co++;
  }
  printf("%s",str);
  }
  return 0;

}
