#include<stdio.h>
int main(){
	
	int arr[5] = {25 , 63 , 35 , 45 , 23 };
	int i , num , count=0,value;
	printf("enter number:");
	scanf("%d" ,&num);
	
	for(i=0 ; i<5 ; i++){
		if(arr[i] == num){
			count = 1;
			value=i;
			break ;
	}
	}
	if(count==1){
		printf("value  found at  index %d" ,value);
	}
	else{
		printf(" value not  found in array :");
	}
}