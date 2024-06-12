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
	
	printf("Day so vua nhap la: ");
	for(i=0; i<n; i++){
		printf(" %d", a[i]);
	}
	printf("\nDay so sap xep theo thu tu giam dan la: ");
	for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
	}
}
