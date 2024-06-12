#include <stdio.h>
int main(){
	int toan, ly, hoa; 
	float avr;
	printf ("\nNhap diem toan: ");
	scanf("%d",&toan);
	while (toan>10||toan<0){
		printf("\nNhap lai diem toan: ");
		scanf("%d",&toan);
	}
	printf ("\nNhap diem ly: ");
	scanf("%d",&ly);
	while (ly>10||ly<0){
		printf("\nNhap lai diem ly: ");
		scanf("%d",&ly);
	}
	printf ("\nNhap diem hoa: ");
	scanf("%d",&hoa);
	while (ly>10||ly<0){
		printf("\nNhap lai diem hoa: ");
		scanf("%d",&hoa);
	}
	
	avr=(float)(toan+ly+hoa)/3;
	prinf("diem trung binh la: %5.3f", avr);
	
	if (avr>=8){
		printf("gioi");
	}
	else if (avr>=7){
		printf("kha");
	}
	else if (avr>=5)
	printf("trung binh");
	else 
	printf("yeu");
}
