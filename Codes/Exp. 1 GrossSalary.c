#include<stdio.h>
#include<conio.h>
int main(){
    float BS,GS,DA,HRA;
    //clrscr();
    printf("Enter the basic salary : ");
    scanf("%f",&BS);
    DA = 0.5*BS;
    HRA = 0.4*BS;
    GS = BS + DA + HRA;
    printf("The gross salary is : %f",GS);
    getch();
    return 0;
}

