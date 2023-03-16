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
	printf("\nCac so le trong day la: ");
	for(i=0; i<n; i++){
		if (a[i]%2==1)
		printf("\n %d",a[i]);
	}
}
