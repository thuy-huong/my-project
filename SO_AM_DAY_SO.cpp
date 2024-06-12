#include<stdio.h>
int main(){
	float a[100];
	int i, n, count=0;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("\nNhap phan tu thu a[%d]: ",i);
		scanf("%f",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if (a[i]<0)
		{
		count=count+1;
		
		}
				
	}
	printf("\nSo phan tu am cua day la:%d ", count);
}
