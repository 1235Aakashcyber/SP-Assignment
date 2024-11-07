#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char S[50],S2[50],rev[50];
    clrscr();
    printf("Enter the string : ");
    gets(S);
    printf("Enter the string 2 from which you want to check equality : ");
    gets(S2);
    strcpy(rev,S);
    //Length
    printf("String length is : %d \n",strlen(S));
    //Equality
    if(strcmp(S,S2)==0){
        printf("The string '%s' and '%s' are Equal \n",S,S2);
    }
    else{
        printf("The string '%s' and '%s' are NOT Equal \n",S,S2);
    }
    //Reversal
    printf("String reversal is : %s \n",strrev(S));
    //Palindrome
    if(strcmp(S,rev)==0){
        printf("The entered string is a palindrome \n");
    }
    else{
        printf("The entered string is not a palindrome \n");
    }
    getch();
    return 0;
}