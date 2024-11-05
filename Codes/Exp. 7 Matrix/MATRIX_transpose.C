#include<stdio.h>
#include<conio.h>
int main(){
int A[3][3], B[3][3];
int i,j;
clrscr();
printf("Enter matrix A \n");
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("Enter A[%d][%d] : ",i,j);
scanf("%d",&A[i][j]);
}
}
for(i=0; i<3; i++){
for(j=0; j<3; j++){
B[j][i] = A[i][j];
}
}
for(i=0; i<3; i++){
for(j=0; j<3; j++){
printf("%d \t",B[i][j]);
}
printf("\n");
}
getch();
return 0;
}

