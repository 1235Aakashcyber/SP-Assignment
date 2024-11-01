#include<stdio.h>
#include<math.h>
int main(){
    float temp,angle,sum=0.0;
    A:
    printf("Enter the angle of sine (in radians) : ");
    scanf("%f",&angle);
    int n,a=1,sign=1;
    printf("Enter the number of terms upto which you want to add : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        a=(2*i-1);
        int fact =1;
            for(int j=1; j<=a; j++){
                fact =fact*j;
    }
        temp = (pow(angle,a)/fact);
        sum = sum + sign*temp;
        sign = -1*sign;

    }
    printf("Sum of sine series upto %d terms is %.5f",n,sum);
return 0;
}