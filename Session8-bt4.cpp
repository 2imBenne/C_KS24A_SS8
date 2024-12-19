#include <stdio.h>

int main(){
	int n,max=0;
	printf("Moi nhap vao mot so nguyen duong lon hon 2: ");
	scanf("%d",&n);
	int matrix[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("Moi nhap vao phan tu [%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]); 
		}	
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		printf("%d ",matrix[i][j]);
	}
		printf("\n") ;
}	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(matrix[i][j]>max){
				max = matrix[i][j]; 
			} 
		}
	}
	printf("Phan tu lon nhat trong mang co gia tri la: %d",max); 
	return 0; 
} 
