#include <stdio.h>

int demphan(float a[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= -5.0 && a[i] <= 17.5) {
            count++;
        }
    }
    return count;
}

float mi2(float a[], int n) {
    float t1, t2;

 
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }


    t1 = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > t1) {
            t2 = a[i];
            break;
        }
    }

    return t2;
}

int main() {
    int n;
    float a[100];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }

    int count = demphantu(a, n);
    printf("So phan tu trong doan [-5.0, 17.5] la: %d\n", count);

    float t2 = min2(a, n);
    printf("Gia tri nho thu hai trong day la: %f", t2);

    return 0;
}
