#include<stdio.h>
//#include<conio.h>
#include<math.h>
int main(){
    int num, amsnum, rem, sum =0, n=0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    amsnum = num;
    while(amsnum !=0){
        amsnum = amsnum/10;
        n++;
    }
    amsnum = num;
    while(amsnum != 0){
        rem = amsnum%10;
        sum = sum + pow(rem,n);
        amsnum = amsnum/10;
    }
    printf("%d\n",sum);
    if(sum == num){
        printf("The given number is an amstrong number");
    }
    else{
        printf("The given number is NOT an amstrong number");
    }
return 0;    
}
