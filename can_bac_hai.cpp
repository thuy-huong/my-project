
#include <stdio.h>
#include <math.h>
 
int main()
{
    int a, n;
    printf("Nhap co so a: ");
    scanf("%d", &a);
     
    printf("Nhap so mu n: ");
    scanf("%d", &n);
 
    float kq = pow(a,1/(float)n);
    printf("\nCan bac %d cua %d la: %f", n, a, kq);
}
