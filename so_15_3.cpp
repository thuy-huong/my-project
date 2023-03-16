#include <stdio.h>
int main(){
	printf("nhap vao mot so");
	int n;
	scanf("%d",&n);
	switch(n){
		case(0): printf("so khong \n");
				 break;
		case(1): printf("so mot \n");
				 break;
		case(2): printf("so hai \n");
				 break;
		default: printf("nhap sai");
				  break;
		
	}
}
