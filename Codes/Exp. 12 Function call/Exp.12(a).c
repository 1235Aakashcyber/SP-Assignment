#include<stdio.h>
void swapnumber(int,int);
int main(){
int a,b;
printf("Enter num1 : ");
scanf("%d",&a);
printf("Enter num2 : ");
scanf("%d",&b);
swapnumber(a,b);
return 0;
}
void swapnumber(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
printf("After swap num1 = %d and num2 = %d",a,b);
}