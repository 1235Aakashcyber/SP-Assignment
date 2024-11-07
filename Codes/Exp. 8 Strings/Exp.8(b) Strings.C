#include<stdio.h>
#include<string.h>
#include<conio.h>
int main(){
    char S[50],S2[50],rev[50];
    int i,j,count=0,count2=0,equality=0,palin=0;
    clrscr();
    printf("Enter the string : ");
    gets(S);
    printf("Enter the string 2 from which you want to check equality : ");
    gets(S2);

    //lenght
    for(i=0; S[i]!='\0'; i++){
	count++;
    }
    printf("The length of the string is %d \n",count);
    //for S2
    for(i=0; S2[i]!='\0'; i++){
	count2++;
    }

    //reverse
    rev[count]='\0';
    j=0;
    for(i=count-1; i>=0; i--){
	    rev[i] = S[j];
	j++;
    }
    printf("The reverse of the string is '%s' \n",rev);

    //Equality check
    for(i=0; S[i]!='\0' && S2[i]!='\0'; i++){
	    if(S[i]==S2[i]){
		equality++;
	    }
	    else{break;}
    }
    if(equality==count && equality == count2){
	printf("The Strings are equal \n");
    }
    else{
	printf("The Strings are not equal \n");
    }

    //palindrome
    for(i=0; S[i]!='\0'; i++){
	if(S[i] == rev[i]){
	    palin++;
	}
    }
    if(palin==count){
	printf("Its a palindrome \n");
    }
    else{
	printf("Not a palindrome \n");
    }
    getch();
    return 0;
}