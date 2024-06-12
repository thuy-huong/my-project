#include<stdio.h>
int tinhtong(int n){
	if(n==0){
		return(0);
	}
	return n + tinhtong(n-1);
}
int main(){
	int n;
	printf("\nNhap n: ");
	scanf("%d", &n);
	int s=tinhtong(n);
	printf("Tong bang: %d", s);
	
}
