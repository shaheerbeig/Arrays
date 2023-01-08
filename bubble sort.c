#include<stdio.h>
int main(){
	
	int a[5] = {16 , 8 , 5 , 2 , 1};
	int i , j , temp ;
	
	for(i=0 ; i<5 ; i++){
		for(j=0 ; j<5 ; j++){
			
			if(a[j] > a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
			
	for(i=0  ;i<5 ; i++ ){
		printf("a[%d] = %d \n " ,i , a[i]);
	}	
	
}
