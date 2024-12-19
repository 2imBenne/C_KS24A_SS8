#include <stdio.h>

int main(){
	printf("DOAN PHAN TU CO TRONG MANG"); 
	int checkarr=0; 
	int arrayInt[5]={1,5,6,8,10}; 
	int n;
	printf("\nMoi nhap mot so nguyen duong tu 1-10: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(n==arrayInt[i]){
		checkarr =1;
		printf("Phan tu co ton tai trong mang va o vi tri %d",i+1);
		break; 	
		} 
	} 
	if(!checkarr){
		printf("Phan tu khong ton tai trong mang "); 
	} 
	return 0; 
} 
