#include <stdio.h>
int main(){
	int a, b, uscln, bscnn;
	printf("Nhap so a: ");
	scanf("%d",&a);
	printf("Nhap so b: ");
	scanf("%d",&b);
	bscnn=a*b;
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
