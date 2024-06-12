#include<stdio.h>
#include<math.h>
int bai1(){
	int a, b, max;
	printf("Nhap so thu hai: ");
	scanf("%d",&a);
	printf("Nhap so thu hai: ");
	scanf("%d",&b);
	if (a>=b){
		max=a;
	}
	else{
		max=b;
	}	
	printf("Gia tri lon nha la: %d", max);
}
int bai2(){
	int a, b;
	float  x;
	printf("\nNhap he so a: ");	
	scanf("%d",&a);
	printf("Nhap he so b: ");
	scanf("%d",&b);
	if (a==0&&b==0){
		printf("Phuong trinh vo so nghien");
	}
	else if (a==0&&b!=0){
		printf("\nPhuong trinh vo nghiem");
	}
	else{
		x=(-b)/a;
		printf("\nPhuong trinh co nghiem la: %f", x);	
	}
}

int bai3(){
	int a, b, c;
	float d, x1, x2;
	printf("\nNhap he so a: ");	
	scanf("%d",&a);
	printf("Nhap he so b: ");
	scanf("%d",&b);
	printf("Nhap he so c: ");	
	scanf("%d",&c);
	if(a==0)
	{
		if(b==0){
			if(c==0)
				printf("Phuong trinh co vo so nghiem");
			else 
				printf("Phuong trinh vo nghiem");
		}
		else 
			printf("Phuong trinh co mot nghiem duy nhat la: %f",-b/c);
	}
	else
	{
	d=b*b-4*a*c;
	if(d<0){
	
		printf("Phuong trinh vo nghiem");
	}
	else if(d==0){
	
		printf("Phuong trinh co nghiem kep: %f", -b/(2*a));
	}
	else {
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet la luot la x1, x2 bang: %f %f", x1 ,x2);
	}
	}
}

#include<stdio.h>
int bai4(){
	int n;
	printf("\nNhap so phan tu cua day so: ");
	scanf("%d",&n);
	int a[n];
	int i, s=0, tb=0;
	for(i=0; i<n; i++){
		printf("Nhap phan tu thu a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++){
		s=s+a[i];
	}
	tb=s/n;
	printf("Trung binh day so vua nhap bang: %d",s);
}

int bai5(){
	int a, b, uscln, bscnn;
	bscnn=a*b;
	printf("/nNhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	while(a!=b){
		if(a>b){
			a=a-b;
		}
		else
			b=b-a;
	}
	uscln=a;
	printf("uscln la: %d", uscln);
	bscnn=bscnn/uscln;
	printf("\nbscnn la: %d", bscnn);
}

int main(){
	bai1();
	bai2();
	bai3();
	bai4();
	bai5();
}
