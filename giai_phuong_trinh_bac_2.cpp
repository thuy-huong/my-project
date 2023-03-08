#include<math.h>
#include<stdio.h>
int main(){
	int a, b, c;
	float d, x1, x2;
	printf("Nhap he so a: ");	
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
	if(d<0)
		printf("Phuong trinh vo nghiem");
	else if(d==0)
		
		printf("Phuong trinh co nghiem kep: %f", -b/(2*a));
	else 
		x1=(-b+sqrt(d))/(2*a);
		x2=(-b-sqrt(d))/(2*a);
		printf("Phuong trinh co 2 nghiem phan biet la luot la x1, x2 bang: %f %f", x1 ,x2);
	}
}
	 
