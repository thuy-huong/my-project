#include<stdio.h>
int main(){
	int a[100];
	int i, n, count=0;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("\nNhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<30; i++){
		if (a[i]%3==0 || a[i]%7==0)
		count=count+1;
				
	}
	printf("\nSo phan chia het cho 3 hoac 7 cua day la:%d ", count);
}
