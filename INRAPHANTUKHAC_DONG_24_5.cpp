#include <stdio.h>
int main(){
    int n, i;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i+1);
        scanf("%d", &a[i]);
    }

    printf("\nDay so da nhap la:\n");
    int dem = 0;
    for(i = 0; i < n; i++) 
	{
        printf("%d ", a[i]);        
        dem++;
        if(dem == 10) 
		{ 
            printf("\n");
            dem = 0;
        }
    }
    if(dem != 0) 
	{ 
        printf("\n");
    }
}
