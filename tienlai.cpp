#include <stdio.h>
int main(){
	int  a=5000000, t=1;
	float   r=0.015;
	while (a<=10000000){
		a=a+a*r;
		t=t+1;
	}
	printf("tien von lon hon 10 trieu sau so thang la: %d", t);
}
