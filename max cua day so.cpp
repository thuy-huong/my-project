#include<stdio.h>

int main(){
	float a[100];
	int i, n; 
	float max=0;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		printf("\nNhap phan tu thu a[%f]: ",i);
		scanf("%f",&a[i]);
	}
	for(i=0; i<n; i++){
		if(a[i]>max)	
			max=a[i];
		}
	printf("\nPhan tu lon nhat cua day la: %f", max);
}
	
