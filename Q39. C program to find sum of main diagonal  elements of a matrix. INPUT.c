
#include<stdio.h>
int main()
{
 int m,n,i,j,sum=0;
 int a[100][100];
 printf("enter the size");
 scanf("%d%d",&m,&n);
 for(i=0;i<m;i++){
 for(j=0;j<n;j++){
 printf("enter elements");
 scanf("%d",&a[i][j]);
 }
 }
 for(i=0;i<m;i++){
 for(j=0;j<n;j++){
 if(i==j){
 sum+=a[i][j];
 }
 }
 }
 printf("sum of diagnal elements is %d",sum);
}
