#include <stdio.h>
#include <stdbool.h>

// Hàm ki?m tra s? nguyên t?
bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, count = 0;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);

    int a[n];
    printf("Nhap day so:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Ð?m s? nguyên t? trong dãy
    for (int i = 0; i <; i++) {
        if (is_prime(a[i])) {
            count++;
        }
    }

    printf("So luong so nguyen to trong day la: %d\n", count);
    return 0;
}
