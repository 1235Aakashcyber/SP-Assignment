#include<stdio.h>
void swapnumbers(int *,int *);
int main(){
int a,b;
printf("Enter num1 : ");
scanf("%d",&a);
printf("Enter num2 : ");
scanf("%d",&b);
swapnumbers(&a,&b);
printf("After swap num1 = %d and num2 = %d",a,b);
return 0;
}
void swapnumbers(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}