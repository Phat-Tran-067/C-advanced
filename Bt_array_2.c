#include <stdio.h>
#include <conio.h>
 
void nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nNhap vao phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void xuat(int a[], int n){
    for(int i = 0; i < n; i++){
        printf("%5d", a[i]);
    }
}

int max(int a[], int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (max < a[i])
            max = a[i];
    return max;
}
 
int min(int a[], int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
        if (min > a[i])
            min = a[i];
    return min;
}

void TangDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}

void GiamDan(int a[], int n){
    int tg;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = a[i];
                a[i] = a[j];
                a[j] = tg;        
            }
        }
    }
}
 
int main(int argc, char const *argv[])
{
    int n;
    printf("\nNhap so luong phan tu n = ");
    do{
        scanf("%d", &n);
        if(n <= 0){
            printf("\nNhap lai (n > 0) n = ");
        }
    }while(n <= 0);
    int a[n];
    nhap(a, n);
    // tim max
    printf("\nMax = %d", max(a, n));

    // tim min
    printf("\nMin = %d", min(a, n));

    // sap xep tang dan:
    TangDan(a, n);
    printf("\nMang sap xep tang dan la: ");
   xuat(a, n);
    
    // sap xep giam dan:
    GiamDan(a, n);
    printf("\nMang sap xep giam dan la: ");
    xuat(a, n);
    getch();
    return 0;
}

