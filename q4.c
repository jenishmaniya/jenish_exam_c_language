// WAP to print all boundary elements of a given 2D array.
#include<stdio.h>
void main(){
	int n,m,i,j;
	printf("Enter the size of row:");
	scanf("%d",&n);
	printf("Enter the size of col:");
	scanf("%d",&m);
	int a[n][m];
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(){
				printf("%d",a[i][j]);
			}
		}
    }
	
}
