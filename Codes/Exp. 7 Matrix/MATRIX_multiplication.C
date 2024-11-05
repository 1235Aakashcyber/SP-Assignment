#include<stdio.h>
#include<conio.h>
int main(){
int A[3][3], B[3][3];
int i,j,k,temp;
clrscr();
printf("Enter matrix A \n");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("Enter element A[%d][%d] : ",i,j);
scanf("%d",&A[i][j]);
}
}
printf("Enter matrix B \n");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("Enter element B[%d][%d] : ",i,j);
scanf("%d",&B[i][j]);
}
}
for(i=0; i<3; i++){
for(j=0; j<3; j++){
temp =0;
for(k=0; k<3; k++){
temp = temp + A[i][k]*B[k][j];
}
printf("%d \t",temp);
}
printf("\n");
}
getch();
return 0;
}








