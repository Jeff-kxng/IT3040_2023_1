/*
Bài 1.8. Viết chương trình nhập vào một ma trận 2 chiều kích thước m*n với m và n nhập từ bàn phím. Sau đó đưa ra tổng các phần tử chẵn của ma trận đó.

Lưu ý: Khi viết hàm cấp phát bộ nhớ cho một ma trận hai chiều biểu diễn bởi con trỏ int **mt, nếu ta truyền con trỏ theo kiểu địa chỉ void allocate_mem(int **mt, int m, int n) sẽ dẫn tới việc cấp phát bộ nhớ cho một bản sao của con trỏ **mt. Do đó, sau khi gọi hàm thì con trỏ **mt gốc vẫn không được cấp phát bộ nhớ. Để cấp phát thành công cần truyền con trỏ theo dạng địa chỉ, ví dụ sử dụng con trỏ cấp 3 dạng int ***mt.
 */
/* Sok Sokong 20211005 */
#include <stdio.h>
void allocate_mem(int ***mt, int m, int n){
    *mt = new int *[m];
    for(int i=0; i<m; i++){
        (*mt)[i] = new int[n];
    }
}


void input(int **mt, int m, int n){
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++){
            printf("mt[%d][%d] = ",i,j);
            scanf("%d",&mt[i][j]);
        }
}

void output(int **mt, int m, int n){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++)
            printf("%d ",mt[i][j]);
        printf("\n");
    }
}

int process(int **mt, int m, int n){
    int tong = 0;
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++){
            if(mt[i][j]%2==0)
                tong += mt[i][j];
        }
    return tong;
}

void free_mem(int **mt, int m, int n){
    for(int i=0; i<m; i++)
        delete []mt[i];
    delete []mt;
}

int main(){
    int m, n, **mt;
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    printf("The sum of all even elements is %d", process(mt, m, n));
    free_mem(mt, m, n);
    return 0;
}