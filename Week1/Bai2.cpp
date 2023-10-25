/*
 Bài tập 2
Viết chương trình in ra địa chỉ của 5 phần tử đầu tiên trong mảng được định nghĩa sau đây:
int a[7]= {13, -355, 235, 47, 67, 943, 1222};
Lưu ý:
Để in địa chỉ con trỏ các bạn sử dụng ký tự định dạng %p
Để lấy địa chỉ của một biến ta có thể dùng phép toán &
 */
#include <stdio.h>

int main() {
    int a[7] = {13, -355, 235, 47, 67, 943, 1222};
    printf("Address of the first five elements in memory:\n");
    for (int i = 0; i < 5; i++) {
        printf("\ta[%d]: %p\n", i, (void *)&a[i]); // In ra địa chỉ của mỗi phần tử
    }

    return 0;
}
// Sok Sokong 20211005