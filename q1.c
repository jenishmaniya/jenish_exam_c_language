// WAP to print all numbers that are divisible by both 3 & 5 from a given range using UDF.
#include<stdio.h>
void div(){
	int a,b,i;
	printf("Enter the value of first number:");
	scanf("%d",&a);
	printf("Enter the value of last number:");
	scanf("%d",&b);
	for(i=a;i<=b;i++){
		if(i%3==0 && i%5==0){
			printf("%d\n",i);
		}
	}
	
}
void main(){
	div();
	return 0;
}
