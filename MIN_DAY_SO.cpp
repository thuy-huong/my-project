#include<stdio.h>
int main(){
	int a[100];
	int i, n, min;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("\nNhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=1; i<n; i++){
		if (min>a[i])
			min=a[i];
		
	}
	printf("\nMin cua day so la: %d", min);
}
