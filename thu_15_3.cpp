#include<stdio.h>
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d",&n);
	switch(n){
		case(2): printf("Thu hai");
				 break;
		case(3): printf("Thu ba");
				 break;
		case(4): printf("Thu tu");
				 break;
		case(5): printf("Thu nam");
				 break;
		case(6): printf("Thu sau");
				 break;
		case(7): printf("Thu bay");
				 break;
		case(8): printf("Chu nhat");
				 break;
		default: printf("nhap sai");
				  break;
	}
}
