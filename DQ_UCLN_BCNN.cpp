#include <stdio.h>
int timucln(int a, int b){
	if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){	
			
			
		a =a- b; 
    	}
		else{
            b = b-a;
        }
    }
    return a; 
}
int main(){
	int a, b;
	printf("Nhap so a: ");
	scanf("%d", &a);
	printf("Nhap so b: ");
	scanf("%d", &b);
	int ucln=timucln(a, b);
	int bcnn=(a*b)/ucln;
	printf("ucln bang: %d", ucln);
	printf("\nbcnn bang: %d", bcnn);
}
