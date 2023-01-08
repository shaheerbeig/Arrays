#include<stdio.h>
int main(){
	int arr[5] ;
	int i , max , min , j ;
	
	for(i=0 ; i<5 ; i++){
		printf("\n Enter the value to be stored in array");
		scanf("%d" ,&arr[i]);
	}
	max=min=arr[0];
	
	for(i=0 ; i<5 ; i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i] < min){
			min=arr[i];
		}
	}
	printf("the greatest value in the array  is %d:",max);
	printf("\n the least value in the array  is %d:",min);
}
	
	
