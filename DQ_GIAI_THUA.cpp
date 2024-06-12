#include<stdio.h>
int giaithua(int n){
	if(n==1){
		return(1);
	} printf("\nNhap n: ");
	return n * giaithua(n-1);
}
int main(){
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);
	int a=giaithua(n);
	printf("Giai thua n bang: %d", a);
	
}
