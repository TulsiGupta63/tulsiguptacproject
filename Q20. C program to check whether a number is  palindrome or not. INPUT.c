
#include<stdio.h>
int main(){
int n,s=0,r,c;
printf("enter a number");
scanf("%d",&n);
c=n;
while(n>0){
r=n%10;
s=r+(s*10);
n=n/10;}
if(c==s)
printf("pallidrom");
else
printf("not a palidrom");
return 0;}
