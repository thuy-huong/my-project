#include<stdio.h>
int main(){
	int a[100];
	int i, n;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("\nNhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
	
		printf("\nPhan tu thu %d: ", i+1);
		printf("%d",a[i]);
	}
}

