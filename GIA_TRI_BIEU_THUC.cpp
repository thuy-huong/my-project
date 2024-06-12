#include<stdio.h>
#include<math.h>
#include <conio.h>
int a(int n, float x){
	if(n==1){
	return x;	
	}
	return (pow(x,n)/n)+a(n-1,x);
}

int b(int n, float x){
	if (n==1){
		return x;
	}
	return pow(x,n) +b(n-1,x);
}

int c(int n, float x){
	if (n==1){
		return -x;
	}
	return pow((-1),n)*pow(x,n) +c(n-1,x);
}

int main(){
	int n;
	float x;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	printf("Nhap so thuc x: ");
	scanf("%f", &x);
	float s1=sqrt(a(n,x));
	printf("Gia tri bieu thuc a la: %f", s1);
	float s2=b(n,x)+1;
	printf("\nGia tri bieu thuc b la: %f", s2);
	float s3=2006-c(n,x);
	printf("\nGia tri bieu thuc b la: %f",s3);
	
}
