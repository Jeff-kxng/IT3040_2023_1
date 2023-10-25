/*
Bài 1.7. Viết chương trình nhập vào một mảng các số nguyên với số lượng các phần tử nhập từ bàn phím. Sau đó sắp xếp mảng theo thứ tự tăng dần. Hiển thị danh sách mảng trước và sau khi sắp xếp.

Yêu cầu chỉ sử dụng con trỏ để truy cập mảng, không truy cập theo index mảng.
 */

/*Sok Sokong 20211005*/
#include <stdio.h>

int *a;
int n, tmp;

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

int main() {
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Cấp phát bộ nhớ cho con trỏ a
    a = new int[n];

    // Nhập các phần tử của mảng
    for (int i = 0; i < n; i++)
        scanf("%d", a + i);

    // Hiển thị mảng đầu vào
    printf("The input array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    // Sắp xếp mảng
    bubbleSort(a, n);

    printf("The sorted array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d ", *(a + i));
    printf("\n");

    delete [] a;
    return 0;
}
