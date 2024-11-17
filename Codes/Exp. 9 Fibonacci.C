#include<stdio.h>
//#include<conio.h>
int fibonacci(int n);
int main(){
int n,i;
//clrscr();
printf("Enter the term upto which you want to print fibonacci series : ");
scanf("%d",&n);
for(i=0; i<n; i++){
    printf("%d \t",fibonacci(i));
}
//getch();
return 0;    
}
int fibonacci(int n){
int fib;
    if(n<=1){
        return n;
    }
    else{
fib = fibonacci(n-1) + fibonacci(n-2); 
return fib;
    }
}