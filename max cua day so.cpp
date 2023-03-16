#include<stdio.h>
int main(){
	int a[100];
	int i, n, max=0;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("\nNhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]>max)
			max=a[i];
		}
	printf("\nPhan tu lon nhat cua day la: %d", max);
}
	
