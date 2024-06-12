#include<stdio.h>
int main(){
	int a[100];
	int i, n, s=0;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("\nNhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		if (a[i]%2==0)
			s=s+a[i];
	}
	printf("\nTong so chan vua nhap bang: %d",s);
}
