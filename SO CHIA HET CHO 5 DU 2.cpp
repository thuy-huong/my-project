#include <stdio.h>

int main() {
    int n, count = 0;
    float x, y;
    
    printf("Nhap vao so phan tu cua day: ");
    scanf("%d", &n);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap vao phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    
    printf("Nhap vao so thuc x: ");
    scanf("%f", &x);
    
    printf("Nhap vao so thuc y: ");
    scanf("%f", &y);
    
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 2 && x <= a[i] && a[i] <= y) {
            count++;
        }
    }
    
    printf("So phan tu chia 5 du 2 va nam trong khoang [%f, %f]: %d", x, y, count);
    
    return 0;
}
