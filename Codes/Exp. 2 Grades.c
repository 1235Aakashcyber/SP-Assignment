#include<stdio.h>
#include<conio.h>
int main(){
    int marks;
    float per;
    clrscr();
    printf("Enter the marks scored out of 500 : ");
    scanf("%d",&marks);
    per = marks/5;
    if(per<=100 && per>=75){
        printf("The student scored grade A+ \n");
    }
    else if(per<75 && per >=60){
        printf("The student scored grade A \n");
    }
    else if(per<60 && per>=50){
        printf("The student scored grade B \n");
    }
    else if(per<50 && per>=40){
        printf("The student scored grade C \n");
    }
    else if(per<40){
        printf("The student is failed");
    }
    else{
        printf("Invalid Input");
    }
getch();
return 0;    
}

