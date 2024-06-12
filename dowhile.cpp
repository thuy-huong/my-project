#include <stdio.h>
int main(){
	int a, count=0;
	do {
		printf("Nhap so: ", a);
		scanf("%d",&a);
		if(a%2==0)
		count=count+1;
	
	}
	while (a!=0);
	printf("so cac so chan la: %d", count);
}
	
