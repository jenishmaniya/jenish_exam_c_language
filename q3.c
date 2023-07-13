// Write all leap years from a given range into a text file.
#include<stdio.h>
void main(){
	int a,b,i;
	printf("Enter the starting year:");
	scanf("%d",&a);
	printf("Enter the ending year:");
	scanf("%d",&b);
	FILE *ptr;
	int leap[1000];
	ptr=fopen("leap-year.txt","w");
	if(ptr == NULL){
		printf("fill can't be created..");
	}else{
		printf("fill is created..");
		for(i=a;i<=b;i++){
			if(i%4==0){
				fprintf(ptr,"%d, ",i);
				
			}
		}
	}
}
