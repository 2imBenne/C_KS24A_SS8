#include <stdio.h>

int main(){
	int n;
	printf("Moi nhap vao so phan tu mong muon cho mang: ") ;
	scanf("%d",&n) ;
	int arrayInt[n];
	for(int i= 0;i < n;i++){
		printf("Moi nhap vao phan tu thu %d: ", i+1);
		scanf("%d",&arrayInt[i]); 
	} 
		for(int j = n-1; j>=0;j--){
			printf("%d ",arrayInt[j]); 
		} 	
	return 0; 
}
 

