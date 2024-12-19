#include <stdio.h>

int main(){
	int n;
	printf("Moi nhap vao mot so nguyen duong lon hon 2: ");
	scanf("%d",&n);
	int matrix[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Moi nhap vao phan tu [%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]); 
		}	
	}
	printf("Ma tran co dang nhu sau: \n"); 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%d ",matrix[i][j]);
	}
		printf("\n") ;
}	
	int sum; 
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				printf("Phan tu nam tren duong cheo chinh la: %d \n",matrix[i][j]);
				sum += matrix[i][j]; 
			} 
		}
	}
	printf("Tong gia tri cua cac phan tu tren duong cheo chinh la: %d",sum); 
	return 0; 
} 
