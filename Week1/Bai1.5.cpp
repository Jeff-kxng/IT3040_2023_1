/*
 Bài 1.5. Viết hàm trả về con trỏ trỏ tới giá trị lớn nhất của một mảng các số double. Nếu mảng rỗng hãy trả về NULL.
 */
#include <cstring>

/* Sok Sokong 20211005*/

double* maximum(double* a, int size){
    double *max;
    max = a;
    if (a==NULL) return NULL;
    for (int i = 1; i < size; i++){
        if (a[i] > *max){
            max = &a[i];
        }
    }
    return max;
}