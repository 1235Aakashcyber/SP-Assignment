#include<stdio.h>
int SearchArray(int Arr[],int n, int search);
int main(){
int size,search,i,A;
printf("Enter the size of the array : ");
scanf("%d",&size);
int Arr[size];
for(i=0; i<size; i++){
    printf("Enter element %d of array : ",i+1);
    scanf("%d",&Arr[i]);
}
printf("Enter the element you want to search : ");
scanf("%d",&search);
A = SearchArray(Arr,size,search);
if(A<size){
printf("The element '%d' is found at index %d ",search,A);
}
else if(A==size){
    printf("Not Found");
}
return 0;   
}
int SearchArray(int Arr[], int size, int search){
    int i,count=0;
    for(i=0; i<size; i++){
        if(Arr[i] == search){
            return i;
            count++;
            break;
        }
    }
    if(count==0){
        printf("Not Found");
    }
}