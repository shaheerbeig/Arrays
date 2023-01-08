#include<stdio.h>
int main(){
	int a[5];
	int i,j;
	for(i=0;i<5;i++){
		printf("enter the %d number::",i+1);
		scanf("%d",&a[i]);
	}
	printf("the entered numbers are \n");
	for(j=0;j<5;j++){
		printf(" %d ",a[j]);
	}
}