//WAP to find the factorial of a given number using a pointer.
#include<stdio.h>
void main(){
	int n;
	int i;
	printf("Enter any number:");
	scanf("%d",&n);
	for(i=n-1;i>=1;i--){
		n=n*i;
	
	}
	printf("Factorial are:%d",n);
}
