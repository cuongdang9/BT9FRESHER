#include<stdio.h>
#define MAX_SIZE 50

    int arr[MAX_SIZE];
    int n; // so luong phan tu
    void nhap(){
        // kiem tra so luong phan tu
    do{
        printf("\n Nhap n = ");
        scanf("%d",&n);
    } while(n <= 0 || n > MAX_SIZE);
    // nhap mang
    for(int i = 0; i < n; i++){
        printf("\nNhap arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
}


void xuat(){
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
}

void gm()
{
    int giam;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (arr[i] < arr[j])
            {
                giam = arr[i];
                arr[i] = arr[j];
                arr[j] = giam;
            }
            
        }
        
    }
    
}
void tg()
{
    int tang;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (arr[i] > arr[j])
            {
                tang = arr[i];
                arr[i] = arr[j];
                arr[j] = tang;
            }
            
        }
        
    }
    
}

int main()
{
   
    nhap();
    printf("mang vua nhap la:");
    xuat();

    tg();
    printf("\nMang tang dan : ");
    xuat();

    gm();
    printf("\nMang giam dan : ");
    xuat();
    
    return 0;
}