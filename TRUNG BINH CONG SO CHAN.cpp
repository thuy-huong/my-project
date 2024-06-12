#include<stdio.h>
int main(){
	int a[100];
	int i, n, s=0, count;
	float avg;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("\nNhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++){
		if (a[i]%2==0)
			s=s+a[i];
			count++;
	}
	avg=float(s/count);
	printf("\nTrung binh cong so chan bang: %f", avg);
}
