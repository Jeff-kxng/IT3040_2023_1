/*
 Bài 1.6. Viết hàm đảo ngược một mảng các số nguyên theo hai cách: dùng chỉ số và dùng con trỏ.

Ví dụ mảng đầu vào là [9, -1, 4, 5, 7] thì kết quả là [7, 5, 4, -1, 9].
 */

/* Sok Sokong 20211005 */
void reversearray(int arr[], int size){
    int l = 0, r = size - 1, tmp;
    // Dùng chỉ số để truy cập các phần tử của mảng
    while (l < r){
        // Đổi chỗ hai phần tử ở hai đầu mảng
        tmp = arr[l];
        arr[l] = arr[r];
        arr[r] = tmp;

        // Tăng chỉ số bên trái và giảm chỉ số bên phải
        l++;
        r--;
    }
}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;
    // Dùng con trỏ để truy cập các phần tử của mảng
    while (l < r){
        // Đổi chỗ hai phần tử ở hai đầu mảng
        tmp = *(arr + l);
        *(arr + l) = *(arr + r);
        *(arr + r) = tmp;

        // Tăng con trỏ bên trái và giảm con trỏ bên phải
        l++;
        r--;
    }
}