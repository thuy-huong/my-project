#include<stdio.h>
#include<conio.h>
int tong(){
	int sothunhat, sothuhai, tong;
	printf("Nhap so thu hai: ");
	scanf("%d",&sothunhat);
	printf("Nhap so thu hai: ");
	scanf("%d",&sothuhai);
	tong=sothunhat+sothuhai;
	printf("tong hai so bang: %d", tong);
}

int hieu(int a, int b){
	return a-b;
}

int main(){
	int a, b;
	tong();
	printf("Nhap so thu hai: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	printf("hieu hai so bang: %d", hieu(a,b));
}
