
#include <stdio.h>
int main(){
 int A[SIZE][SIZE];
 int row, col, is Identity;
 printf("Enter elements in matrix of size 3x3: \n");
 for(row=0; row<SIZE; row++) {
 for(col=0; col<SIZE; col++){
 scanf("%d", &A[row][col]); }
 }
 Is Identity = 1;
 for(row=0; row<SIZE; row++) {
 for(col=0; col<SIZE; col++) {
 if(row==col && A[row][col]!=1) {
 is Identity = 0; }
 else if(row!=col && A[row][col]!=0) {
 is Identity = 0;}
 }
 } if(is Identity == 1) {
 printf("\n The given matrix is an Identity Matrix.\n");
 for(row=0; row<SIZE; row++){
 for(col=0; col<SIZE; col++)
 {
 printf("%d ", A[row][col]);
 }
 printf("\n"); }
 }
 else
 {
 printf("The given matrix is not Identity Matrix");
 }
 return 0;
}
