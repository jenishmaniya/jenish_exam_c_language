//WAP to find the maximum number from the given 3 numbers using the ternary operator.
#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter the value of A:");
	scanf("%d",&a);
    printf("Enter the value of B:");
	scanf("%d",&b);
	printf("Enter the value of C:");
	scanf("%d",&c);
	(a>b)?((a>c)?printf("A IS MAX"):printf("C IS MAX"))
	:((b>c)?printf("B IS MAX"):printf("C IS MAX"));
}
