#include<stdio.h>
int main(){
	int a[100];
	int i, n, count=0;
	printf("Nhap so phan tu cua day so: ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		printf("\nNhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		if (a[i]%2==0)
		{
		count=count+1;
		Printf("\nPhan tu chia het cho 2 la: %d",a[i]);
		}
				
	}
	printf("\nSo phan tu chia het cua day la:%d ", count);
}
