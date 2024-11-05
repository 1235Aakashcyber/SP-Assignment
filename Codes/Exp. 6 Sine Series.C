#include<stdio.h>
//#include<conio.h>
#include<math.h>
int main(){
    float temp,angle,sum=0.0;
    int i,j,n,a=1,fact,sign=1;
    //clrscr();
    printf("Enter the angle of sine (in radians) : ");
    scanf("%f",&angle);
    printf("Enter the number of terms upto which you want to add : ");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
	a=(2*i-1);
        fact =1;
	    for(j=1; j<=a; j++){
		fact =fact*j;
    }
	temp = (pow(angle,a)/fact);
	sum = sum + sign*temp;
	sign = -1*sign;
    }
    printf("Sum of sine series upto %d terms is %.5f \n",n,sum);

//getch();
return 0;
}

