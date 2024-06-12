#include <stdio.h>
void Nhapdayso(int n, int a[]){
    printf("Nhap vao day so:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
}
void Xuatdayso(int n, int a[]){
    printf("Day so vua nhap la: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
	}
}

int main(){
    int n;
    printf("Nhap vao so phan tu cua day: ");
    scanf("%d", &n);
    int a[n];
    Nhapdayso(n, a);
    Xuatdayso(n, a);
    
	int k;
	printf("Nhap so nguyen duong k: ");
    scanf("%d", &k);
    while(k<=0){
    printf("Nhap lai so nguyen duong k: ");
    scanf("%d", &k);
    }
    int count = 0;
    int s= 0;
	for (int i = 0; i < n; i++) {
        if (a[i] % k == 0){
            count++;
            s= s+a[i];
        }
    }
	if (count > 0) {
    	float avg = (float)s / count;
    	printf("Trung binh cong cac so chia het cho %d trong mang la %.2f\n", k, avg);
	}
	else{
		printf("Khong co so nao chia het cho %d trong mang.\n", k);
    }
    
	int sum=0;
	for (int i=0; i<n; i++){
		if (a[i]%2==0){
			sum=sum+a[i];
		}
	}
	printf("\nTong so chan trong day la: %d", sum);	
}
