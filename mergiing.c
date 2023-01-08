#include<stdio.h>
int main(){
	int a1[5]={2,8,21,13,4};
	int a2[5]={5,29,14,10,7};
	int a3[10];
	int i , j , k=0 , temp ;
	
	for(i=0;i<10;i++){
		if(i>4){
			a3[i]=a2[k];
			k++;
		}
		else{
		a3[i]=a1[i];
	}
}
	for(i=0;i<10;i++){
		printf("%d \n" ,a3[i]);
	}
	printf("\n the ssorted array is :\n ");
	for(i=0;i<10;i++){
		for(j=0;j<9;j++){
			if(a3[j]>a3[j+1]){
			temp=a3[j];
			a3[j]=a3[j+1];
			a3[j+1]=temp;
		}
	}
}
		for(i=0;i<10;i++){
			printf(" %d " ,a3[i]);
		}		
}
