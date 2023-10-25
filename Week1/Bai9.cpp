/*
Bài tập 9
Viết chương trình in ra tất cả các dãy con của một dãy cho trước. Ví dụ dãy 1 3 4 2 có các dãy con sau:
1
1 3
1 3 4
1 3 4 2
3
3 4
3 4 2
4
4 2
2
 */

#include <stdio.h>
#include <stdlib.h>

// Hàm để in ra một dãy con
void print_subarray(int arr[], int start, int end) {
    for (int i = start; i <= end; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Hàm để sinh ra và in ra tất cả các dãy con của một dãy cho trước
void print_all_subarrays(int arr[], int n) {
    // Duyệt qua tất cả các vị trí bắt đầu của dãy con
    for (int i = 0; i < n; i++) {
        // Duyệt qua tất cả các vị trí kết thúc của dãy con
        for (int j = i; j < n; j++) {
            // In ra dãy con từ vị trí i đến vị trí j
            print_subarray(arr, i, j);
        }
    }
}
// Sok Sokong 20211005
// Hàm chính để kiểm tra chương trình
int main() {
    // Khởi tạo một dãy số nguyên
    int arr[] = {1, 3, 4, 2};
    // Tính số phần tử của dãy
    int n = sizeof(arr) / sizeof(arr[0]);
    // Gọi hàm để in ra tất cả các dãy con của dãy
    print_all_subarrays(arr, n);
    // Kết thúc chương trình
    return 0;
}