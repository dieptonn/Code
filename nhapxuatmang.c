#include<stdio.h>
#define MAX 100

void insert(int arr[], int n){
    for(int i=0; i<n;i++) {
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
    }
}                                   //dùng hàm void vì mảng arr sẽ tự lưu vào bộ nhớ và ko cần giá trị trả về

void output(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("arr[%d]= %d\n",i,arr[i]);  // bình thường truyền vào hàm void sẽ tạo bản sao và kết quả trả về ko thay đổi
    }                                           // nhưng ở đây nó ko tạo bản sao mà truyền trực tiếp vào mảng vì do mảng mang kích thước lớn
}

void search(int arr[], int n, int v){
     for(int i=0;i<n;i++){
         if(arr[i]== v){
             printf("V = arr[%d]",i);
         }
     }
}
 // hoặc là tìm kiếm bằng cách này

 int search2(int arr[],int n,int s){
     for(int i=0;i<n;i++){
         if(s== arr[i]){
             return i;                  // return -1; nếu ko có gtrị thỏa mãn
         }
     }
     return -1;
 }

int main(){
    int N,V,S;
    int arr[MAX];
    do{
        printf("Nhap N: "); scanf("%d",&N);
    }while(N<0 || N>MAX );
    printf("Nhap mang: \n");
    insert(arr,N);
    printf("Xuat mang: \n");
    output(arr,N);
    printf("vi du ve viec mang tu luu trong bo nho ma khong can return: ");
    printf("arr[0]= %d",arr[0]);               // ở đây arr[1] đã ở trong bộ nhớ sẵn
    printf("\nNhap V(tim kiem bang cach in trong ham void)= "); scanf("%d",&V);
    search(arr,N,V);

    printf("\nNhap S(tim kiem bang cach 2)= "); scanf("%d",&S);
    
    printf("S= arr[%d]",search2(arr,N,S));
    return 0;
}