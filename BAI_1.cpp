#include<stdio.h>
#include<math.h>
int tinh(int n, float x, float y){
	if(n==1){
	return x+y;	
	}
	return (n*pow(x,n)+n*pow(y,n))+tinh(n-1,x,y);
}
int main(){
	int n;
	float x, y;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	printf("Nhap so thuc x: ");
	scanf("%f", &x);
	printf("Nhap so thuc y: ");
	scanf("%f", &y);
	float s=tinh(n,x,y);
	printf("Gia tri bieu thuc la: %f", s);
}
